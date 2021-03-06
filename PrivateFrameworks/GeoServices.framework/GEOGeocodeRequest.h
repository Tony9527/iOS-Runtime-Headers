/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOGeocodeRequest : GEOPlaceSearchRequest {
    unsigned short _geocodeProvider;
}

@property (nonatomic) unsigned short geocodeProvider;

- (unsigned short)geocodeProvider;
- (id)initForwardGeocodeWithAddress:(id)arg1;
- (id)initForwardGeocodeWithAddressDictionary:(id)arg1;
- (id)initForwardGeocodeWithAddressString:(id)arg1;
- (id)initReverseGeocodeWithCoordinate:(struct { double x1; double x2; })arg1;
- (id)initReverseGeocodeWithCoordinate:(struct { double x1; double x2; })arg1 includeBusinessOptions:(BOOL)arg2;
- (id)initWithAddress:(id)arg1 maxResults:(int)arg2 traits:(id)arg3;
- (id)initWithCoordinate:(struct { double x1; double x2; })arg1 includeEntryPoints:(BOOL)arg2 traits:(id)arg3;
- (void)setGeocodeProvider:(unsigned short)arg1;

@end
