/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSMutableSet;

@interface CoreDAVPrincipalSearchPropertySet : CoreDAVRootItem {
    NSMutableSet *_searchProperties;
}

@property(retain) NSMutableSet *searchProperties;

+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)errorOnUnknownChildren;
+ (BOOL)parsingWithSubItems;

- (void)addSearchProperty:(id)arg1;
- (id)copyCoreDAVParseRules;
- (void)dealloc;
- (id)description;
- (id)searchProperties;
- (void)setSearchProperties:(id)arg1;

@end