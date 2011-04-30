#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import <AudioToolbox/AudioToolbox.h>

@interface TestAudioUnit : NSObject <UIApplicationDelegate, AVAudioSessionDelegate> {
    UIWindow *window;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (retain, nonatomic) IBOutlet UIButton *buttonPrepare;
@property (retain, nonatomic) IBOutlet UIButton *buttonStart;
@property (retain, nonatomic) IBOutlet UIButton *buttonStop;
@property (retain, nonatomic) IBOutlet UIButton *buttonPause;
@property (retain, nonatomic) IBOutlet UIButton *buttonResume;

- (IBAction) onButtonPrepareClick: (id)sender;
- (IBAction) onButtonStartClick: (id)sender;
- (IBAction) onButtonStopClick: (id)sender;
- (IBAction) onButtonPauseClick: (id)sender;
- (IBAction) onButtonResumeClick: (id)sender;
@end
