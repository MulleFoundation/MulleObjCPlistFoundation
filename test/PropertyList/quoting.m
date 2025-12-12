//
//  main.m
//  archiver-test
//
//  Created by Nat! on 19.04.16.
//  Copyright © 2016 Mulle kybernetiK. All rights reserved.
//
#import <MulleObjCPlistFoundation/MulleObjCPlistFoundation.h>


// interesting problem here: value is a NSDictionary with a NSNumber and
// the printed representation. But the plist doesn't know about NSNumber
// when parsing back in (maybe it should) so we get a string back

static void  code_decode( id value)
{
   NSData   *data;
   id       decoded;
   NSString  *valueDesc;
   NSString  *decodedDesc;

   valueDesc = [value description];
   printf( "%s->",
      [valueDesc UTF8String]);
   fflush( stdout);

   @try
   {
      data   = [NSPropertyListSerialization dataFromPropertyList:value
                                                          format:NSPropertyListOpenStepFormat
                                                errorDescription:NULL];
      decoded = [NSPropertyListSerialization propertyListFromData:data
                                                 mutabilityOption:0
                                                           format:NULL
                                                 errorDescription:NULL];

      decodedDesc = [decoded description];
      if( ! [valueDesc isEqualToString:decodedDesc])
         printf( "*MISMATCH*");

      printf( "%s\n",
         [decodedDesc UTF8String]);
   }
   @catch( NSException *exception)
   {
      printf( "exception: %s\n", [[exception reason] UTF8String]);
   }
}



int   main(int argc, const char * argv[])
{
   int   i;

   for( i = 82; i <= 83; i++)
      code_decode( @{ [NSNumber numberWithDouble:(double) i / 10]: [NSString stringWithFormat:@"%c", i] });

   for( i = 7; i <= 13; i++)
      code_decode( @{ [NSNumber numberWithDouble:(double) i / 10]: [NSString stringWithFormat:@"%c", i] });
   for( i = 27; i <= 27; i++)
      code_decode( @{ [NSNumber numberWithDouble:(double) i / 10]: [NSString stringWithFormat:@"%c", i] });
   for( i = 32; i <= 126; i++)
      code_decode( @{ [NSNumber numberWithDouble:(double) i / 10]: [NSString stringWithFormat:@"%c", i] });
   return( 0);
}
