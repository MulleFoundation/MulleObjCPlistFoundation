//
//  main.m
//  archiver-test
//
//  Created by Nat! on 19.04.16.
//  Copyright © 2016 Mulle kybernetiK. All rights reserved.
//
#import <MulleObjCPlistFoundation/MulleObjCPlistFoundation.h>

// there is an error in line #25
static char  text[] =
#include "Movies.plist.inc"
;


int   main(int argc, const char * argv[])
{
   NSData                 *data;
   id                     decoded;
   NSPropertyListFormat   format;

   format = MullePropertyListLooseFormat;
   @try
   {
      data    = [NSData dataWithBytes:text
                               length:sizeof( text)];
      decoded = [NSPropertyListSerialization propertyListFromData:data
                                                 mutabilityOption:0
                                                           format:&format
                                                 errorDescription:NULL];
      mulle_printf( "%@\n", decoded ? decoded : [NSError mulleExtract]);
   }
   @catch( NSException *exception)
   {
      mulle_fprintf( stderr, "exception: %@\n", [exception reason]);
   }

   return( 0);
}
