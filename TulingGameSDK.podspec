Pod::Spec.new do |s|
  s.name         = 'TulingGameSDK'
  s.summary      = '图灵游戏发行商iOS-SDK,集成登录、支付系统。http://www.tulinggame.com'
  s.version      = '1.0.0.3'
  s.license      = { :type => 'MIT', :file => 'LICENSE' }
  s.authors      = { 'TulingGameSDK_Dev' => 'TulingGameSDK@163.com' }
  s.social_media_url = 'http://www.tulinggame.com'
  s.homepage     = 'https://github.com/TulingGameSDK/TulingGameSDK'
  s.platform     = :ios, '8.0'
  s.ios.deployment_target = '8.0'
  s.source       = { :git => 'https://github.com/TulingGameSDK/TulingGameSDK.git', :tag => s.version.to_s }
  s.requires_arc = true
  s.source_files = 'TulingGameSDK/TestSDK.h'
  s.public_header_files = 'TulingGameSDK/TestSDK.h'
  s.libraries = 'z', 'sqlite3'
  s.frameworks = 'UIKit', 'CoreFoundation', 'CoreText', 'CoreGraphics', 'CoreImage', 'QuartzCore', 'ImageIO', 'AssetsLibrary', 'Accelerate', 'MobileCoreServices', 'SystemConfiguration', 'CoreTelephony', 'Security'
  s.resource  = 'TulingGameSDK/TulingGameSDKBundle.bundle'
  s.vendored_frameworks = 'TulingGameSDK/TulingGameSDK.framework'

end