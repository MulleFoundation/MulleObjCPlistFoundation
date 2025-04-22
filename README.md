# MulleObjCPlistFoundation

#### 🏢 PropertyList parsing and printing

PropertyLists are a human readable representation of some data. The classic
Objective-C format is the [plist](//en.wikipedia.org/wiki/Property_list),
which looks like this:

``` sh
{
	key = "string value";
}
```





| Release Version                                       | Release Notes  | AI Documentation
|-------------------------------------------------------|----------------|---------------
| ![Mulle kybernetiK tag](https://img.shields.io/github/tag/MulleFoundation/MulleObjCPlistFoundation.svg) [![Build Status](https://github.com/MulleFoundation/MulleObjCPlistFoundation/workflows/CI/badge.svg)](//github.com/MulleFoundation/MulleObjCPlistFoundation/actions) | [RELEASENOTES](RELEASENOTES.md) | [DeepWiki for MulleObjCPlistFoundation](https://deepwiki.com/MulleFoundation/MulleObjCPlistFoundation)


## API

### Classes

| Class                         | Description
| ------------------------------|-----------------------
| `NSPropertyListSerialization` |




## Info

This library supports "plist". Add [MulleObjCJSMNFoundation](//github.com/MulleWeb/MulleObjCJSMNFoundation) for JSON
or [MulleObjCExpatFoundation](//github.com/MulleFoundation/MulleObjCExpatFoundation) for XML.

Though the MulleObjCPlistFoundation is "below" MulleObjCOSFoundation, you
will likely need the MulleObjCOSFoundation for printing NSDates as it contains
the NSDateFormatter subclasses.



## Requirements

|   Requirement         | Release Version  | Description
|-----------------------|------------------|---------------
| [MulleObjCStandardFoundation](https://github.com/MulleFoundation/MulleObjCStandardFoundation) | ![Mulle kybernetiK tag](https://img.shields.io/github/tag/MulleFoundation/MulleObjCStandardFoundation.svg) [![Build Status](https://github.com/MulleFoundation/MulleObjCStandardFoundation/workflows/CI/badge.svg?branch=release)](https://github.com/MulleFoundation/MulleObjCStandardFoundation/actions/workflows/mulle-sde-ci.yml) | 🚤 Objective-C classes based on the C standard library
| [mulle-objc-list](https://github.com/mulle-objc/mulle-objc-list) | ![Mulle kybernetiK tag](https://img.shields.io/github/tag/mulle-objc/mulle-objc-list.svg) [![Build Status](https://github.com/mulle-objc/mulle-objc-list/workflows/CI/badge.svg?branch=release)](https://github.com/mulle-objc/mulle-objc-list/actions/workflows/mulle-sde-ci.yml) | 📒 Lists mulle-objc runtime information contained in executables.

### You are here

![Overview](overview.dot.svg)

## Add

**This project is a component of the [MulleFoundation](//github.com/MulleFoundation/MulleFoundation) library.
As such you usually will *not* add or install it individually, unless you
specifically do not want to link against `MulleFoundation`.**


### Add as an individual component

Use [mulle-sde](//github.com/mulle-sde) to add MulleObjCPlistFoundation to your project:

``` sh
mulle-sde add github:MulleFoundation/MulleObjCPlistFoundation
```

To only add the sources of MulleObjCPlistFoundation with dependency
sources use [clib](https://github.com/clibs/clib):


``` sh
clib install --out src/MulleFoundation MulleFoundation/MulleObjCPlistFoundation
```

Add `-isystem src/MulleFoundation` to your `CFLAGS` and compile all the sources that were downloaded with your project.


## Install

Use [mulle-sde](//github.com/mulle-sde) to build and install MulleObjCPlistFoundation and all dependencies:

``` sh
mulle-sde install --prefix /usr/local \
   https://github.com/MulleFoundation/MulleObjCPlistFoundation/archive/latest.tar.gz
```

### Legacy Installation

Install the requirements:

| Requirements                                 | Description
|----------------------------------------------|-----------------------
| [MulleObjCStandardFoundation](https://github.com/MulleFoundation/MulleObjCStandardFoundation)             | 🚤 Objective-C classes based on the C standard library
| [mulle-objc-list](https://github.com/mulle-objc/mulle-objc-list)             | 📒 Lists mulle-objc runtime information contained in executables.

Download the latest [tar](https://github.com/MulleFoundation/MulleObjCPlistFoundation/archive/refs/tags/latest.tar.gz) or [zip](https://github.com/MulleFoundation/MulleObjCPlistFoundation/archive/refs/tags/latest.zip) archive and unpack it.

Install **MulleObjCPlistFoundation** into `/usr/local` with [cmake](https://cmake.org):

``` sh
cmake -B build \
      -DCMAKE_INSTALL_PREFIX=/usr/local \
      -DCMAKE_PREFIX_PATH=/usr/local \
      -DCMAKE_BUILD_TYPE=Release &&
cmake --build build --config Release &&
cmake --install build --config Release
```

## Author

[Nat!](https://mulle-kybernetik.com/weblog) for Mulle kybernetiK  


