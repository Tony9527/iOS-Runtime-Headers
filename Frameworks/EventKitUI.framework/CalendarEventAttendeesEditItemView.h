/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class CalendarEventAttendeePickerView;



@interface CalendarEventAttendeesEditItemView : CalendarEventEditItemView 
{
    CalendarEventAttendeePickerView *_pickerView;
}


- (void)getAttendees:(id*)arg1 addresses:(id*)arg2 names:(id*)arg3;
- (id)navigationPrompt;
- (void)absorbValueFromSerializedValue:(id)arg1;
- (BOOL)completeForDetachmentType:(NSInteger)arg1;
- (BOOL)canCompleteForDetachmentType:(NSInteger)arg1;
- (id)_firstInvalidRecipientAddress;
- (id)navigationTitle;
- (void)setAttendees:(id)arg1;
- (BOOL)becomeFirstResponder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;

@end