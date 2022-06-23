//
//  MulleObjCBufferedInputStream+InlineAccessors.h
//  MulleObjCPlistFoundation
//
//  Copyright (c) 2009 Nat! - Mulle kybernetiK.
//  Copyright (c) 2009 Codeon GmbH.
//  All rights reserved.
//
//
//  Redistribution and use in source and binary forms, with or without
//  modification, are permitted provided that the following conditions are met:
//
//  Redistributions of source code must retain the above copyright notice, this
//  list of conditions and the following disclaimer.
//
//  Redistributions in binary form must reproduce the above copyright notice,
//  this list of conditions and the following disclaimer in the documentation
//  and/or other materials provided with the distribution.
//
//  Neither the name of Mulle kybernetiK nor the names of its contributors
//  may be used to endorse or promote products derived from this software
//  without specific prior written permission.
//
//  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
//  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
//  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
//  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
//  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
//  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
//  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
//  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
//  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
//  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
//  POSSIBILITY OF SUCH DAMAGE.
//

#define MULLE_OBJC_BUFFERED_INPUT_STREAM_IVAR_VISIBILITY  @public

#import "MulleObjCBufferedInputStream.h"


// don't inline these and don't call'em yourself
MULLE_OBJC_PLIST_FOUNDATION_GLOBAL
int    MulleObjCBufferedInputStreamFillBufferAndNextCharacter( MulleObjCBufferedInputStream *self);

MULLE_OBJC_PLIST_FOUNDATION_GLOBAL
MulleObjCMemoryRegion   MulleObjCBufferedInputStreamBookmarkedRegion( MulleObjCBufferedInputStream *self);

// keep as small as possible for inlining
static inline int  MulleObjCBufferedInputStreamCurrentCharacter( MulleObjCBufferedInputStream *_self)
{
   struct { @defs( MulleObjCBufferedInputStream); }  *self = (void *) _self;

   if( ! self->_current)
      return( -1);
   return( *self->_current);
}


static inline int   MulleObjCBufferedInputStreamNextCharacter( MulleObjCBufferedInputStream *_self)
{
   struct { @defs( MulleObjCBufferedInputStream); }  *self = (void *) _self;

   assert( self->_current);

   if( ++self->_current == self->_sentinel)
      return( MulleObjCBufferedInputStreamFillBufferAndNextCharacter( _self));

   return( *self->_current);
}


static inline int   MulleObjCBufferedInputStreamConsumeCurrentCharacter( MulleObjCBufferedInputStream *_self)
{
   struct { @defs( MulleObjCBufferedInputStream); }  *self = (void *) _self;
   int     c;

   // end reached ?
   if( ! self->_current)
      return( -1);
   c = *self->_current;

   MulleObjCBufferedInputStreamNextCharacter( _self);
   return( c);
}


static inline size_t  MulleObjCBufferedInputStreamBytesAvailable( MulleObjCBufferedInputStream *_self)
{
   struct { @defs( MulleObjCBufferedInputStream); }  *self = (void *) _self;

   return( self->_sentinel - self->_current);
}


//
// The bookmark is just behind the current character.
// this is necessary for composed characters, where we read multiple chars.
// It possible that there is not data yet. The initial bookmark is set
// to -1.
//
static inline void  MulleObjCBufferedInputStreamBookmarkAtOffset( MulleObjCBufferedInputStream *_self,
                                                                  NSInteger offset)
{
   struct { @defs( MulleObjCBufferedInputStream); }  *self = (void *) _self;

   if( self->_bookmarkData)
   {
      [self->_bookmarkData release];
      self->_bookmarkData = nil;
   }

   // it's ok if self->_current is NULL it can happen if nothing has
   // been read yet, yet we still want to bookmark
   self->_bookmark  = (self->_current - (unsigned char *) [self->_data bytes]);
   self->_bookmark += offset;
}


static inline void  MulleObjCBufferedInputStreamBookmark( MulleObjCBufferedInputStream *_self)
{
   MulleObjCBufferedInputStreamBookmarkAtOffset( _self, 0);
}
