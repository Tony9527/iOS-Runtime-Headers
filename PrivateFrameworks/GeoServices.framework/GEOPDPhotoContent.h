/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDPhotoContent : PBCodable <NSCopying> {
    struct { 
        unsigned int height : 1; 
        unsigned int width : 1; 
    } _has;
    unsigned int _height;
    NSString *_url;
    unsigned int _width;
}

@property (nonatomic) BOOL hasHeight;
@property (nonatomic, readonly) BOOL hasUrl;
@property (nonatomic) BOOL hasWidth;
@property (nonatomic) unsigned int height;
@property (nonatomic, retain) NSString *url;
@property (nonatomic) unsigned int width;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasHeight;
- (BOOL)hasUrl;
- (BOOL)hasWidth;
- (unsigned int)hash;
- (unsigned int)height;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasHeight:(BOOL)arg1;
- (void)setHasWidth:(BOOL)arg1;
- (void)setHeight:(unsigned int)arg1;
- (void)setUrl:(id)arg1;
- (void)setWidth:(unsigned int)arg1;
- (id)url;
- (unsigned int)width;
- (void)writeTo:(id)arg1;

@end
