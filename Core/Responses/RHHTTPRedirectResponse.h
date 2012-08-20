#import <Foundation/Foundation.h>
#import "RHHTTPResponse.h"


@interface RHHTTPRedirectResponse : NSObject <RHHTTPResponse>
{
	NSString *redirectPath;
}

- (id)initWithPath:(NSString *)redirectPath;

@end
