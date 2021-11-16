//
//  main.m
//  archiver-test
//
//  Created by Nat! on 19.04.16.
//  Copyright © 2016 Mulle kybernetiK. All rights reserved.
//
#import <MulleObjCPlistFoundation/MulleObjCPlistFoundation.h>


static void  code_decode( id value)
{
   NSData   *data;
   id       decoded;

   @try
   {
      data   = [NSPropertyListSerialization dataFromPropertyList:value
                                                          format:NSPropertyListOpenStepFormat
                                                errorDescription:NULL];
      decoded = [NSPropertyListSerialization propertyListFromData:data
                                                 mutabilityOption:0
                                                           format:NULL
                                                 errorDescription:NULL];
      printf( "->\"%s\" = %s (%.*s :: %s)\n",
               [decoded UTF8String],
               [value isEqualToString:decoded] ? "SAME" : "DIFFERENT",
               (int) [data length], (char *) [data bytes],
               [data UTF8String]);
   }
   @catch( NSException *exception)
   {
      printf( "exception: %s\n", [[exception reason] UTF8String]);
   }
}


int main(int argc, const char * argv[])
{
   NSString   *s;

//   s = [[[NSString alloc] initWithBytes:"\x53\x69\x6d\x65\x6f\x6e\x73\x63\x61\x72\x72\xc2\x89"
//                                          length:-1
//                                        encoding:NSUTF8StringEncoding] autorelease];
//
//   printf( "\"%s\"", [s UTF8String]);
//   fflush( stdout);
//
//   // real life strangeness :)
//   code_decode( s);


   // this is a non-printable separation hint
   s = [[[NSString alloc] initWithBytes:"A\302\255B"
                                 length:-1
                               encoding:NSUTF8StringEncoding] autorelease];

   printf( "%s", [[s mulleQuotedString] UTF8String]);
   fflush( stdout);
   code_decode( s);


//   // this is broken
//   s = [[[NSString alloc] initWithBytes:"A\302\302\177B"
//                                 length:-1
//                               encoding:NSUTF8StringEncoding] autorelease];
//
//   printf( "\"%s\"", [s UTF8String]);
//   fflush( stdout);
//   code_decode( s);


   return( 0);
}
