# This file will be regenerated by `mulle-match-to-cmake` via
# `mulle-sde reflect` and any edits will be lost.
#
# This file will be included by cmake/share/Headers.cmake
#
if( MULLE_TRACE_INCLUDE)
   MESSAGE( STATUS "# Include \"${CMAKE_CURRENT_LIST_FILE}\"" )
endif()

#
# contents are derived from the file locations

set( INCLUDE_DIRS
src
src/Parsing
src/Printing
src/Stream
src/generic
src/reflect
)

#
# contents selected with patternfile ??-header--private-generated-headers
#
set( PRIVATE_GENERATED_HEADERS
src/reflect/_MulleObjCPlistFoundation-import-private.h
src/reflect/_MulleObjCPlistFoundation-include-private.h
)

#
# contents selected with patternfile ??-header--private-generic-headers
#
set( PRIVATE_GENERIC_HEADERS
src/generic/import-private.h
src/generic/include-private.h
)

#
# contents selected with patternfile ??-header--public-generated-headers
#
set( PUBLIC_GENERATED_HEADERS
src/reflect/_MulleObjCPlistFoundation-export.h
src/reflect/_MulleObjCPlistFoundation-import.h
src/reflect/_MulleObjCPlistFoundation-include.h
)

#
# contents selected with patternfile ??-header--public-generic-headers
#
set( PUBLIC_GENERIC_HEADERS
src/generic/import.h
src/generic/include.h
)

#
# contents selected with patternfile ??-header--public-headers
#
set( PUBLIC_HEADERS
src/MulleObjCLoader+MulleObjCPlistFoundation.h
src/MulleObjCPlistFoundation.h
src/NSDictionary+PropertyList.h
src/NSPropertyListSerialization.h
src/NSString+PropertyList.h
src/Parsing/NSArray+PropertyListParsing.h
src/Parsing/NSData+PropertyListParsing.h
src/Parsing/NSDictionary+PropertyListParsing.h
src/Parsing/NSObject+PropertyListParsing.h
src/Parsing/NSString+PropertyListParsing.h
src/Printing/MulleObjCPropertyListPrinting.h
src/Printing/NSArray+PropertyListPrinting.h
src/Printing/NSData+PropertyListPrinting.h
src/Printing/NSDate+PropertyListPrinting.h
src/Printing/NSDictionary+PropertyListPrinting.h
src/Printing/NSNumber+PropertyListPrinting.h
src/Printing/NSString+PropertyListPrinting.h
src/Stream/_MulleObjCBufferedInputStream+InlineAccessors.h
src/Stream/MulleObjCBufferedInputStream.h
src/Stream/_MulleObjCBufferedOutputStream+InlineAccessors.h
src/Stream/MulleObjCBufferedOutputStream.h
src/Stream/_MulleObjCPropertyListReader+InlineAccessors.h
src/Stream/_MulleObjCPropertyListReader.h
src/Stream/MulleObjCStream.h
src/Stream/_MulleObjCUTF8StreamReader+InlineAccessors.h
src/Stream/MulleObjCUTF8StreamReader.h
)

