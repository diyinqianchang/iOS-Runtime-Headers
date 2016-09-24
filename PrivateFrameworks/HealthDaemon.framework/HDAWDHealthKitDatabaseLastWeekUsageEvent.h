/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAWDHealthKitDatabaseLastWeekUsageEvent : PBCodable <NSCopying> {
    int  _databaseSizeMB;
    struct { 
        unsigned int databaseSizeMB : 1; 
        unsigned int highFrequencyDataSizeMB : 1; 
        unsigned int manuallyEnteredTypesCount : 1; 
        unsigned int percentageDeletedObjects : 1; 
        unsigned int rowCountObjects : 1; 
        unsigned int thirdPartyAppsCount : 1; 
        unsigned int thirdPartyAppsWroteDataCount : 1; 
        unsigned int timestamp : 1; 
        unsigned int rowCountCDA : 1; 
        unsigned int hasWatchSource : 1; 
    }  _has;
    BOOL  _hasWatchSource;
    int  _highFrequencyDataSizeMB;
    int  _manuallyEnteredTypesCount;
    int  _percentageDeletedObjects;
    int  _rowCountCDA;
    int  _rowCountObjects;
    int  _thirdPartyAppsCount;
    int  _thirdPartyAppsWroteDataCount;
    unsigned int  _timestamp;
}

@property (nonatomic) int databaseSizeMB;
@property (nonatomic) BOOL hasDatabaseSizeMB;
@property (nonatomic) BOOL hasHasWatchSource;
@property (nonatomic) BOOL hasHighFrequencyDataSizeMB;
@property (nonatomic) BOOL hasManuallyEnteredTypesCount;
@property (nonatomic) BOOL hasPercentageDeletedObjects;
@property (nonatomic) BOOL hasRowCountCDA;
@property (nonatomic) BOOL hasRowCountObjects;
@property (nonatomic) BOOL hasThirdPartyAppsCount;
@property (nonatomic) BOOL hasThirdPartyAppsWroteDataCount;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasWatchSource;
@property (nonatomic) int highFrequencyDataSizeMB;
@property (nonatomic) int manuallyEnteredTypesCount;
@property (nonatomic) int percentageDeletedObjects;
@property (nonatomic) int rowCountCDA;
@property (nonatomic) int rowCountObjects;
@property (nonatomic) int thirdPartyAppsCount;
@property (nonatomic) int thirdPartyAppsWroteDataCount;
@property (nonatomic) unsigned int timestamp;

- (int)StringAsRowCountCDA:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)databaseSizeMB;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasDatabaseSizeMB;
- (BOOL)hasHasWatchSource;
- (BOOL)hasHighFrequencyDataSizeMB;
- (BOOL)hasManuallyEnteredTypesCount;
- (BOOL)hasPercentageDeletedObjects;
- (BOOL)hasRowCountCDA;
- (BOOL)hasRowCountObjects;
- (BOOL)hasThirdPartyAppsCount;
- (BOOL)hasThirdPartyAppsWroteDataCount;
- (BOOL)hasTimestamp;
- (BOOL)hasWatchSource;
- (unsigned int)hash;
- (int)highFrequencyDataSizeMB;
- (BOOL)isEqual:(id)arg1;
- (int)manuallyEnteredTypesCount;
- (void)mergeFrom:(id)arg1;
- (int)percentageDeletedObjects;
- (BOOL)readFrom:(id)arg1;
- (int)rowCountCDA;
- (id)rowCountCDAAsString:(int)arg1;
- (int)rowCountObjects;
- (void)setDatabaseSizeMB:(int)arg1;
- (void)setHasDatabaseSizeMB:(BOOL)arg1;
- (void)setHasHasWatchSource:(BOOL)arg1;
- (void)setHasHighFrequencyDataSizeMB:(BOOL)arg1;
- (void)setHasManuallyEnteredTypesCount:(BOOL)arg1;
- (void)setHasPercentageDeletedObjects:(BOOL)arg1;
- (void)setHasRowCountCDA:(BOOL)arg1;
- (void)setHasRowCountObjects:(BOOL)arg1;
- (void)setHasThirdPartyAppsCount:(BOOL)arg1;
- (void)setHasThirdPartyAppsWroteDataCount:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setHasWatchSource:(BOOL)arg1;
- (void)setHighFrequencyDataSizeMB:(int)arg1;
- (void)setManuallyEnteredTypesCount:(int)arg1;
- (void)setPercentageDeletedObjects:(int)arg1;
- (void)setRowCountCDA:(int)arg1;
- (void)setRowCountObjects:(int)arg1;
- (void)setThirdPartyAppsCount:(int)arg1;
- (void)setThirdPartyAppsWroteDataCount:(int)arg1;
- (void)setTimestamp:(unsigned int)arg1;
- (int)thirdPartyAppsCount;
- (int)thirdPartyAppsWroteDataCount;
- (unsigned int)timestamp;
- (void)writeTo:(id)arg1;

@end