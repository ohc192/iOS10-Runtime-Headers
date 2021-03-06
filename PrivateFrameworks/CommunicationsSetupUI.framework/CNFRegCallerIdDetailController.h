/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

@interface CNFRegCallerIdDetailController : PSListItemsController {
    CNFRegController * _regController;
}

@property (nonatomic, readonly, retain) CNFRegController *regController;

- (void).cxx_destruct;
- (void)_setupAccountHandlers;
- (id)initWithRegController:(id)arg1;
- (id)regController;
- (void)reloadCallerIdValues;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
