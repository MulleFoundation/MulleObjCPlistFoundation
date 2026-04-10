## 0.21.0









feature: expose sorted-dictionary flags and register ObjC dependencies

* New global flags `_MulleObjCPropertyListSortedDictionary` and `_MulleObjCJSONSortedDictionary` to allow callers to enable deterministic sorted-dictionary printing.
* Add MulleObjCDeps+MulleObjCPlistFoundation and objc-deps.inc to register Objective‑C runtime dependencies so required classes/categories are linked.
* Added/updated tests covering JSON and PropertyList parsing/printing.
