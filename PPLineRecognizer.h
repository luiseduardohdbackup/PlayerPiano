//
//  PPLineRecognizer.h
//  PlayerPiano
//
//  Created by Steve Streza on 2/13/10.
//  Copyright 2010 Villainware.
//
//  See LICENSE.md file in the PlayerPiano source directory, or at
//  http://github.com/amazingsyco/PlayerPiano/blob/master/LICENSE.md
//

#import <Foundation/Foundation.h>

typedef BOOL (^PPLineRecognizerBlock)(NSString *);
typedef void (^PPLineActionBlock)(NSString *);

@interface PPLineRecognizer : NSObject {
	PPLineRecognizerBlock recognizerBlock;
	PPLineActionBlock actionBlock;
}

@property (nonatomic, copy) PPLineRecognizerBlock recognizerBlock;
@property (nonatomic, copy) PPLineActionBlock actionBlock;

+(id)recognizerWithRecognizerBlock:(PPLineRecognizerBlock)recognizer performingActionBlock:(PPLineActionBlock)action;
-(BOOL)testLine:(NSString *)line;

@end
