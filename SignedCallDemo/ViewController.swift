//
//  ViewController.swift
//  SignedCallDemo
//
//  Created by Rameshwar Gupta on 18/04/23.
//

import UIKit
import CleverTapSDK
import SignedCallSDK


class ViewController: UIViewController {
    
    let initOptions: [String: Any] = [
        "accountID": "32iuh434y7878fwhfdf87ydf89shu",
        "apiKey": "jkhjkhxzyoaK5rgdIzHlfVU3gkjwhef87few7webewjbrewr78wewe87erew67e67ew7w7rywemolqcD0YLrghXhn",
        "cuid" : "CT_251121_TEST",
        "production": false
    ]

    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
        
        NotificationCenter.default.addObserver(self, selector: #selector(self.callStatus(notification:)), name: NSNotification.Name(rawValue: "MessageReceived"), object: nil)
     
    }
    
    
    @IBAction func signedCallInitialisation() {
        
        SignedCall.initSDK(withInitOptions: initOptions) { result in
            switch result {
            case .success(let success):
                print("SDK Initialized! \(success)")
                //Handle success scenario
                
            case .failure(let error):
                print("SDK initialization failed \(error)")
                //Handle failure scenario
            }
        }
        

    }
    
    // MARK: Make Phone Calls
    
    @IBAction func makePhoneCallsViaSignedCall() {
        let customMetaData = SCCustomMetadata(initiatorImage: "https://img.freepik.com/premium-vector/sad-boy-sitting-alone_38747-644.jpg?w=360", receiverImage: "https://media.istockphoto.com/id/121884056/photo/child-listening-to-music-on-a-headset.jpg?s=612x612&w=0&k=20&c=wcFZfO7TGAth8fD9fTlTyVOvRdtA4LdtzLaZQsDXmhA=")
        
        let callOptions = SCCallOptionsModel(context: "Developer is calling", receiverCuid: "shivam", customMetaData: customMetaData)
        
        SignedCall.call(callOptions: callOptions) { result in
                    switch result {
                    case .success(let success):
                        //Handle call initiated
                        print("call initiated with success reason:", success.description)
                        
                    case .failure(let error):
                        //Handle call failure
                        print("call failed with reason:", error.localizedDescription)

                    }
                }
    }
    
    // MARK: Handle Events of Phone Calls
    @objc func callStatus(notification: Notification) {
        let message = notification.userInfo?["callStatus"] as? SCCallStatus

        if message == SCCallStatus.CALL_DECLINED {
            //when the call is declined from the receiver's end
            
            print("declined")
            
        } else if message == SCCallStatus.CALL_MISSED {
            //when the call is missed at the receiver's end
            
            print("missed")
            
        } else if message == SCCallStatus.CALL_OVER {
            //when the call has been disconnected
            
            print("call over")
            
        }
        else if message == SCCallStatus.CALL_ANSWERED {
            // when call is answered
            print("answered")
            
        } else if message == SCCallStatus.RECEIVER_BUSY_ON_ANOTHER_CALL {
            //when the receiver is busy on another call
            print("busy")
            
        } else if message ==
                    SCCallStatus.ERR_MICROPHONE_PERMISSION_NOT_GRANTED {
            //this message is thrown if microphone permission is denied while receiving a call.
            print("permission issue")
        }
    }

}

