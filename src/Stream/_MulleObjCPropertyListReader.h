//
//  _MulleObjCPropertyListReader.h
//  MulleObjCPlistFoundation
//
//  Copyright (c) 2011 Nat! - Mulle kybernetiK.
//  Copyright (c) 2011 Codeon GmbH.
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
#import "MulleObjCUTF8StreamReader.h"


@interface _MulleObjCPropertyListReader : MulleObjCUTF8StreamReader
{
@public
   Class   nsArrayClass;
   Class   nsSetClass;
   Class   nsDictionaryClass;
   Class   nsStringClass;
   Class   nsDataClass;
   Class   nsDateClass;
   id      nsNull;
}

// decodePBX is incompatible with decodesNull
@property( assign) BOOL  decodesPBX;                        // $ _ / don't force quoted strings
@property( assign) BOOL  decodesNumber;                     // unquoted numbers become NSNumber
@property( assign) BOOL  decodesBool;                       // YES/NO becomes 1/0
@property( assign) BOOL  decodesNull;                       // __NULL__ is NSNull
@property( assign) BOOL  decodesDate;                       // ^"" becomes a date
@property( assign) NSStringEncoding  stringEncoding;        // used for NSStrings only
@property( assign, setter=setLeaf:) BOOL  isLeaf;           // only used for strings parsing
@property( assign, setter=setStringsPlist:) BOOL  isStringsPlist;   // only used for strings parsing

@end
