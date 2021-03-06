//
//  NSDate+PropertyListPrinting.m
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

#import "NSDate+PropertyListPrinting.h"

// other files in this library
#import "NSString+PropertyListPrinting.h"

// other libraries of MulleObjCPlistFoundation
#import "import-private.h"

// std-c and dependencies



@implementation NSDate( PropertyListPrinting)

// NSData is <>
// NSArray is ()
// NSDictionary is {}
// NSSet is {( )}
// NSDate formatted as <@ @> why not
//
- (void) mullePrintPlist:(struct MulleObjCPrintPlistContext *) ctxt
{
   NSString   *s;

   s = [ctxt->dateFormatter stringForObjectValue:self];
   if( ctxt->usesExtensions)
      [ctxt->handle mulleWriteUTF8String:"<@"];
   else
      s = [s mulleQuotedString];
   [s mulleWriteToStream:ctxt->handle
           usingEncoding:NSUTF8StringEncoding];

   if( ctxt->usesExtensions)
      [ctxt->handle mulleWriteUTF8String:"@>"];
}


- (void) mullePrintJSON:(struct MulleObjCPrintPlistContext *) ctxt
{
   NSString   *s;

   s = [ctxt->dateFormatter stringForObjectValue:self];
   [s mulleWriteToStream:ctxt->handle
           usingEncoding:NSUTF8StringEncoding];
}


@end
