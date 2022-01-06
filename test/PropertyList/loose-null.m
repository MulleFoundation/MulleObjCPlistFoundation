//
//  main.m
//  archiver-test
//
//  Created by Nat! on 19.04.16.
//  Copyright © 2016 Mulle kybernetiK. All rights reserved.
//
#import <MulleObjCPlistFoundation/MulleObjCPlistFoundation.h>

static char  text[] = "{ foo = __NULL__; }";


int   main(int argc, const char * argv[])
{
   NSData                 *data;
   id                     decoded;
   NSPropertyListFormat   format;
   NSData                 *encoded;

   format = MullePropertyListLooseFormat;
   @try
   {
      data    = [NSData dataWithBytes:text
                               length:sizeof( text)];
      decoded = [NSPropertyListSerialization propertyListFromData:data
                                                 mutabilityOption:0
                                                           format:&format
                                                 errorDescription:NULL];
      mulle_printf( "decoded: %@\n", decoded);

      encoded = [NSPropertyListSerialization dataWithPropertyList:decoded
                                                           format:MullePropertyListLooseFormat
                                                          options:0
                                                            error:NULL];
      mulle_printf( "encoded: %.*s\n", (int) [encoded length], [encoded bytes]);
   }
   @catch( NSException *exception)
   {
      mulle_fprintf( stderr, "exception: %@\n", [exception reason]);
   }

   return( 0);
}
