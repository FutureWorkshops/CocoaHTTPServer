#import <Foundation/Foundation.h>
#import "RHHTTPResponse.h"


@interface RHHTTPDataResponse : NSObject <RHHTTPResponse>
{
	NSUInteger offset;
	NSData *data;
}

- (id)initWithData:(NSData *)data;

@end
