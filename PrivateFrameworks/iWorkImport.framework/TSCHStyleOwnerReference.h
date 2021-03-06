/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHStyleOwnerReference : NSObject <NSCopying> {
    unsigned int mIndex;
    int mType;
}

@property (nonatomic, readonly) Class genericPropertyMapClass;
@property (nonatomic, readonly) unsigned int index;
@property (nonatomic, readonly) Class nonstyleClass;
@property (nonatomic, readonly) Class styleClass;
@property (nonatomic, readonly) int type;

+ (id)styleOwnerReferenceWithType:(int)arg1 index:(unsigned int)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (Class)genericPropertyMapClass;
- (unsigned int)hash;
- (unsigned int)index;
- (id)initWithStyleOwnerType:(int)arg1 index:(unsigned int)arg2;
- (BOOL)isEqual:(id)arg1;
- (Class)nonstyleClass;
- (Class)styleClass;
- (int)type;

@end
