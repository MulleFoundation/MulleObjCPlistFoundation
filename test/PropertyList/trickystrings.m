//
//  main.m
//  archiver-test
//
//  Created by Nat! on 19.04.16.
//  Copyright © 2016 Mulle kybernetiK. All rights reserved.
//
#ifdef __MULLE_OBJC__
#import <MulleObjCPlistFoundation/MulleObjCPlistFoundation.h>
#import <MulleObjCOSFoundation/MulleObjCOSFoundation.h>
#else
# import <Foundation/Foundation.h>
#endif


int   main( int argc, const char * argv[])
{
   NSData                 *data;
   NSDictionary           *dict;
   NSPropertyListFormat   format;

   data   = [[NSFileHandle fileHandleWithStandardInput] readDataToEndOfFile];
   format = NSPropertyListOpenStepFormat;
   dict   = [NSPropertyListSerialization propertyListWithData:data
                                                      options:0
                                                       format:&format
                                                        error:NULL];

   mulle_printf( "%@\n", dict);
   return( 0);
}
