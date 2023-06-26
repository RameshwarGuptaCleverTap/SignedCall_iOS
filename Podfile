source 'https://github.com/CleverTap/podspecs.git'
source 'https://github.com/CocoaPods/Specs.git'

target 'SignedCallDemo' do
  use_frameworks!
  pod 'CleverTap-SignedCall-SDK'

end

post_install do |installer|
    installer.pods_project.targets.each do |target|
        target.build_configurations.each do |config|
            config.build_settings['IPHONEOS_DEPLOYMENT_TARGET'] = '10.0'
            config.build_settings['BUILD_LIBRARY_FOR_DISTRIBUTION'] = 'YES'
        end
   end
end
