#import "RHHTTPConnection.h"

@interface RHDAVConnection : RHHTTPConnection {
	id requestContentBody;
  NSOutputStream* requestContentStream;
}
@end
