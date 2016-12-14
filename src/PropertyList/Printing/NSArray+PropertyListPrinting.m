//
//  NSArray+PropertyListPrinting.m
//  MulleObjCFoundation
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
#import "NSArray+PropertyListPrinting.h"

// other files in this library

// other libraries of MulleObjCFoundation

// std-c and dependencies


@implementation NSArray ( PropertyListPrinting)


static char   separator[] = { ',', ' ' };
static char   opener[]    = { '(', ' ' };
static char   closer[]    = { ' ', ')' };
//static char   empty[]     = { '(', ')' };


- (void) propertyListUTF8DataToStream:(id <_MulleObjCOutputDataStream>) handle
                               indent:(unsigned int) indent
{
   NSUInteger   i, n;
   id           value;
   unsigned     indent1;
   
   n = [self count];
   if( ! n)
   {
      [handle writeBytes:separator
                  length:sizeof( separator)];
      return;
   }
   
   [handle writeBytes:opener
               length:sizeof( opener)];
   
   indent1 = indent + 1;
  
   for( i = 0; i < n; i++)
   {
      if( i)
         [handle writeBytes:separator
                     length:sizeof( separator)];
      value = [self objectAtIndex:i];
      [value propertyListUTF8DataToStream:handle
                                   indent:indent1];
   }

   [handle writeBytes:closer
               length:sizeof( closer)];
}

@end
