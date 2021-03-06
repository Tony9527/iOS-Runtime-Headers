/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKShareID : NSObject <NSCopying, NSSecureCoding> {
    NSString *_shareName;
    CKRecordZoneID *_zoneID;
}

@property (nonatomic, copy) NSString *shareName;
@property (nonatomic, copy) CKRecordZoneID *zoneID;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)ckShortDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithShareName:(id)arg1 zoneID:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (void)setShareName:(id)arg1;
- (void)setZoneID:(id)arg1;
- (id)shareName;
- (id)zoneID;

// Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon

- (id)brc_containerID;
- (id)brc_itemID;
- (id)initWithDocumentItem:(id)arg1;
- (id)initWithItemID:(id)arg1 zoneID:(id)arg2;
- (id)initWithRecordID:(id)arg1;

@end
