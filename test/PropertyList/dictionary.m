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
      printf( "%s->%s\n",
            [[value description] UTF8String],
            [[decoded description] UTF8String]);
   }
   @catch( NSException *exception)
   {
      printf( "exception: %s\n", [[exception reason] UTF8String]);
   }
}


int main(int argc, const char * argv[])
{
   code_decode( @{});
   code_decode( @{ @"key": @"value"});
   code_decode( @{ @"key1": @"value1", @"key2": @"value2"});

   return( 0);
}
