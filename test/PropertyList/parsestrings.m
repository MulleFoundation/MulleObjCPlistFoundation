//
//  main.m
//  archiver-test
//
//  Created by Nat! on 19.04.16.
//  Copyright © 2016 Mulle kybernetiK. All rights reserved.
//
#ifdef __MULLE_OBJC__
#import <MulleObjCPlistFoundation/MulleObjCPlistFoundation.h>
#else
# import <Foundation/Foundation.h>
#endif


static void  parse_strings( NSDictionary *dict, BOOL expect)
{
   NSString               *s;
   NSData                 *data;
   NSDictionary           *check;
   NSPropertyListFormat   format;

   s    = [dict descriptionInStringsFileFormat];
   data = [s dataUsingEncoding:NSUTF16StringEncoding];

   format = NSPropertyListOpenStepFormat;
   check  = [NSPropertyListSerialization propertyListWithData:data
                                                      options:0
                                                       format:&format
                                                        error:NULL];

   printf( "%s\n", [dict isEqual:check] == expect ? "PASS" : "FAIL");
   if( [dict isEqual:check] != expect)
   {
      mulle_fprintf( stderr, "s: %@\n", s);
      mulle_fprintf( stderr, "i: %@\n", dict);
      mulle_fprintf( stderr, "o: %@\n", check);
      mulle_fprintf( stderr, "d: %@\n", data);
   }
}


// this is the output when run on MacOS
//
// "a" = "A";
// "b" = "B";
// "a.lf.b" = "A\nB";
// "b" = 12;
// "b" = (
// );

int main( int argc, const char * argv[])
{
   parse_strings( @{ @"a": @"A",  @"b": @"B" }, YES);
   parse_strings( @{}, NO);  // will create empty string, so will produce nil
   parse_strings( @{ @"a.lf.b": @"A\nB" }, YES);
   parse_strings( @{ @"b": @12 }, NO);   // Apple can print this, but parses as string
   parse_strings( @{ @"b": @[] }, YES);  // Apple prints this as ()

   return( 0);
}
