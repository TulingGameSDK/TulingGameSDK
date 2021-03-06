Pod::Spec.new do |s|

  s.name         = "TulingGameSDK"

  s.version      = "1.0.0.8"

  s.summary      = "图灵游戏发行商iOS-SDK,集成登录、支付系统。http://www.tulinggame.com"

  s.description  = <<-DESC
                   TulingGameSDK,图灵游戏发行商iOS-SDK,集成登录、支付系统。http://www.tulinggame.com
                  DESC

  s.homepage     = "https://github.com/TulingGameSDK/TulingGameSDK"

  s.license = { :type => 'MIT', :text => <<-LICENSE
         Copyright PPAbner 2017-2018
          LICENSE
      }

  s.author             = { "TulingGameSDK_Dev" => "TulingGameSDK@163.com" }
  
  s.social_media_url   = "http://www.tulinggame.com"

  s.platform     = :ios

  s.ios.deployment_target = "8.0"

  s.source       = { :git => "https://github.com/TulingGameSDK/TulingGameSDK.git", :tag => "#{s.version}" }

  s.resource  = "TulingGameSDK/**/*.bundle"

  #s.preserve_paths = "TulingGameSDK/**/*.{framework,a}"

  s.vendored_frameworks = "TulingGameSDK/**/*.{framework}"

  s.frameworks = 'Foundation' , 'CoreTelephony', 'SystemConfiguration', 'MobileCoreServices', 'Accelerate', 'Security', 'AssetsLibrary', 'ImageIO', 'QuartzCore', 'CoreImage', 'CoreGraphics', 'CoreText', 'CoreFoundation', 'UIKit'

  s.libraries = 'z', 'sqlite3'

  s.pod_target_xcconfig = { 'OTHER_LDFLAGS' => '-lObjC' }

  s.requires_arc = true

end
