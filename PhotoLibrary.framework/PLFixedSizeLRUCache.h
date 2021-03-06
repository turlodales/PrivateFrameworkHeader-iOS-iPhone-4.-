/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLFixedSizeLRUCache : NSObject  {
    unsigned int _size;
    unsigned int _usedSlots;
    struct __CFArray { } *_lruQueue;
    struct __CFDictionary { } *_keyToObjectMapping;
}


- (void)invalidate;
- (void)dealloc;
- (id)objectWithKey:(unsigned int)arg1;
- (void)_freeMemory:(id)arg1;
- (id)initForCacheSize:(unsigned int)arg1;
- (void)addObject:(id)arg1 withKey:(unsigned int)arg2;
- (void)removeObjectWithKey:(unsigned int)arg1;

@end
