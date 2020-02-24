#
# cmake/_Sources.cmake is generated by `mulle-sde`. Edits will be lost.
#
if( MULLE_TRACE_INCLUDE)
   MESSAGE( STATUS "# Include \"${CMAKE_CURRENT_LIST_FILE}\"" )
endif()

set( SOURCES
src/Archiver/MulleObjCArchiver.m
src/Archiver/MulleObjCUnarchiver.m
src/Archiver/NSArchiver.m
src/Archiver/NSCoder.m
src/Archiver/NSKeyedArchiver.m
src/Archiver/NSKeyedUnarchiver.m
src/Archiver/NSObject+NSCoder.m
src/Archiver/NSUnarchiver.m
src/Container/MulleObjCContainerDescription.m
src/Container/NSArray/NSArray+NSSortDescriptor.m
src/Container/NSArray/NSArray+NSString.m
src/Container/NSDictionary/NSDictionary+NSString.m
src/Container/NSDictionary/NSMapTable+NSArray+NSString.m
src/Container/NSSet/NSHashTable+NSArray+NSString.m
src/Container/NSSet/NSSet+NSString.m
src/Container/NSSortDescriptor+NSCoder.m
src/Container/NSSortDescriptor.m
src/Exception/NSAssertionHandler.m
src/Exception/NSError+String.m
src/Exception/NSError.m
src/Exception/NSException+String.m
src/Exception/NSException.m
src/Locale/_MulleGMTTimeZone.m
src/Locale/NSArray+NSLocale.m
src/Locale/NSCalendarDate+NSDateFormatter.m
src/Locale/NSCalendarDate.m
src/Locale/NSDateFormatter.m
src/Locale/NSDate+NSCalendarDate.m
src/Locale/NSDate+NSDateFormatter.m
src/Locale/NSDictionary+NSLocale.m
src/Locale/NSLocale.m
src/Locale/NSNumberFormatter.m
src/Locale/NSNumber+NSLocale.m
src/Locale/NSString+NSLocale.m
src/Locale/NSTimeZone.m
src/Notification/NSNotificationCenter.m
src/Notification/NSNotification.m
src/Notification/NSThread+NSNotification.m
src/PropertyList/NSData+Unicode.m
src/PropertyList/NSDictionary+PropertyList.m
src/PropertyList/NSPropertyListSerialization.m
src/PropertyList/NSString+PropertyList.m
src/PropertyList/Parsing/NSArray+PropertyListParsing.m
src/PropertyList/Parsing/NSData+PropertyListParsing.m
src/PropertyList/Parsing/NSDictionary+PropertyListParsing.m
src/PropertyList/Parsing/NSObject+PropertyListParsing.m
src/PropertyList/Parsing/NSString+PropertyListParsing.m
src/PropertyList/Printing/MulleObjCPropertyListPrinting.m
src/PropertyList/Printing/NSArray+PropertyListPrinting.m
src/PropertyList/Printing/NSData+PropertyListPrinting.m
src/PropertyList/Printing/NSDate+PropertyListPrinting.m
src/PropertyList/Printing/NSDictionary+PropertyListPrinting.m
src/PropertyList/Printing/NSNumber+PropertyListPrinting.m
src/PropertyList/Printing/NSString+PropertyListPrinting.m
src/PropertyList/Stream/_MulleObjCBufferedDataInputStream.m
src/PropertyList/Stream/_MulleObjCBufferedDataOutputStream.m
src/PropertyList/Stream/_MulleObjCDataStream.m
src/PropertyList/Stream/_MulleObjCPropertyListReader.m
src/PropertyList/Stream/_MulleObjCUTF8StreamReader.m
src/String/MulleObjCCharacterBitmap.m
src/String/_MulleObjCConcreteBitmapCharacterSet.m
src/String/_MulleObjCConcreteCharacterSet.m
src/String/_MulleObjCConcreteInvertedCharacterSet.m
src/String/_MulleObjCConcreteRangeCharacterSet.m
src/String/NSCharacterSet.m
src/String/NSFormatter.m
src/String/NSMutableCharacterSet.m
src/String/NSMutableString+Search.m
src/String/NSScanner.m
src/String/NSString+Components.m
src/String/NSString+Escaping.m
src/String/NSString+NSCharacterSet.m
src/String/NSString+Search.m
src/Undo/NSUndoManager.m
src/mulle-foundation-standalone.m
src/mulle-foundation-universeconfiguration.m
)

set( STAGE2_SOURCES
src/MulleObjCLoader+MulleObjCStandardFoundation.m
)
