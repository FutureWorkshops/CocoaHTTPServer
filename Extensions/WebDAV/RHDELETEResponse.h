#import "RHHTTPResponse.h"

@interface RHDELETEResponse : NSObject <RHHTTPResponse> {
  NSInteger _status;
}
- (id) initWithFilePath:(NSString*)path;
@end
