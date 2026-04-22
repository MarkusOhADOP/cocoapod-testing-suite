Pod::Spec.new do |s|
    s.name         = "BidmadTargetPickWrapper-Dev"
    s.version      = "3.0.2"
    s.summary      = "This repository is built to wrap TargetPick (LibADPlus) SDK."
    s.description  = "This repository is built to wrap TargetPick SDK. Use this repository for BidmadTargetPickAdapter support."
    s.homepage     = "https://targetpick.io/"
    s.license = { :type => 'MIT', :text => 'LICENSE' }
    s.author             = { "Markus" => "markus@adop.cc" }
    s.source       = { :git => 'https://github.com/MarkusOhADOP/cocoapod-testing-suite.git', :tag => 'BidmadTargetPickWrapper-Dev.3.0.2' }
    s.vendored_frameworks = ["LibADPlus.xcframework", "OMSDK_Cjnet.xcframework"]
    s.platform = :ios
    s.swift_version = "5.0"
    s.ios.deployment_target  = '14.0'

    s.frameworks = [
        'AVKit',
        'AVFoundation',
        'UIKit',
        'Foundation',
        'CoreGraphics',
        'QuartzCore',
        'SystemConfiguration',
        'MediaPlayer',
        'CFNetwork',
        'WebKit',
        'StoreKit',
        'AdSupport'
    ]

    s.pod_target_xcconfig = {
        'ENABLE_BITCODE' => 'NO',
        'OTHER_LDFLAGS' => '-ObjC',
    }

end
