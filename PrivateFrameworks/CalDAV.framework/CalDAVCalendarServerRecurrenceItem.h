/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@interface CalDAVCalendarServerRecurrenceItem : CoreDAVItem {
    CalDAVCalendarServerChangesItem *_changes;
    CoreDAVItemWithNoChildren *_master;
    CoreDAVLeafItem *_recurrenceID;
}

@property (nonatomic, retain) CalDAVCalendarServerChangesItem *changes;
@property (nonatomic, readonly) BOOL isMaster;
@property (nonatomic, retain) CoreDAVItemWithNoChildren *master;
@property (nonatomic, retain) CoreDAVLeafItem *recurrenceID;

- (id)changes;
- (id)copyParseRules;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithNameSpace:(id)arg1 andName:(id)arg2;
- (BOOL)isMaster;
- (id)master;
- (id)recurrenceID;
- (void)setChanges:(id)arg1;
- (void)setMaster:(id)arg1;
- (void)setRecurrenceID:(id)arg1;

@end
