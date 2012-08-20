#import <Foundation/Foundation.h>
#import "RHHTTPResponse.h"

@class RHHTTPConnection;


@interface RHHTTPFileResponse : NSObject <RHHTTPResponse>
{
	RHHTTPConnection *connection;
	
	NSString *filePath;
	UInt64 fileLength;
	UInt64 fileOffset;
	
	BOOL aborted;
	
	int fileFD;
	void *buffer;
	NSUInteger bufferSize;
}

- (id)initWithFilePath:(NSString *)filePath forConnection:(RHHTTPConnection *)connection;
- (NSString *)filePath;

@end
