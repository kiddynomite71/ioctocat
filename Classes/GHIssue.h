#import <Foundation/Foundation.h>
#import "GHResource.h"
#import "GHRepository.h"


@interface GHIssue : GHResource {
	GHRepository *repository;
	NSString *issueId;
	NSString *user;
	NSString *title;
	NSString *body;
	NSString *state;
	NSString *type;
	NSDate *created;
	NSDate *updated;
	NSInteger votes;
	NSInteger num;
}

@property (nonatomic, retain) GHRepository *repository;
@property (nonatomic, retain) NSString *issueId;
@property (nonatomic, retain) NSString *user;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSString *body;
@property (nonatomic, retain) NSString *state;
@property (nonatomic, retain) NSString *type;
@property (nonatomic, retain) NSDate *created;
@property (nonatomic, retain) NSDate *updated;
@property (nonatomic, readwrite) NSInteger num;
@property (nonatomic, readwrite) NSInteger votes;

@end
