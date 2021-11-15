#import <MulleObjCPlistFoundation/MulleObjCPlistFoundation.h>


@interface SimpleStream : NSObject <MulleObjCOutputStream>
@end


@implementation SimpleStream

- (void) mulleWriteBytes:(void *) bytes
                  length:(NSUInteger) length
{
   printf( "%.*s", (int) length, (char *) bytes);
}

@end


int   main( void)
{
   MulleObjCBufferedOutputStream   *stream;
   SimpleStream                    *simple;
   int                             i;
   char                            buf[ 64];

   simple = [SimpleStream object];
   stream = [[[MulleObjCBufferedOutputStream alloc] initWithOutputStream:simple
                                                              bufferSize:32] autorelease];
   for( i = 1848-15; i <= 1848; i++)
   {
      sprintf( buf, "VfL Bochum %d\n", i);
      [stream mulleWriteBytes:buf
                       length:-1];
   }
   [stream flush];

   return( 0);
}
