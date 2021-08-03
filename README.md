# DeepWall Kids

[![Platform](https://img.shields.io/cocoapods/p/DeepWallKids)](https://cocoapods.org/pods/deepwallkids)
[![Cocoapods](https://img.shields.io/cocoapods/v/DeepWallKids)](https://cocoapods.org/pods/deepwallkids)


End-to-end solution for building, managing and maintaining profitable mobile apps offering in-app purchases.


## Installation

### CocoaPods

> [CocoaPods](https://cocoapods.org) is a dependency manager for Cocoa projects. For usage and installation instructions, visit their website.


DeepWall is available through CocoaPods. To install it, add the following lines to your `Podfile`.

1. Add DeepWall pod.

```rb
use_frameworks!

pod 'DeepWallKids'
```

2. Run `pod install` or `pod update`.
3. Then, you could use DeepWall by adding `import DeepWallKids` to your project files.

## Usage

### Initialization

```swift
import DeepWallKids

let yourApiKey = "{YOUR_API_KEY}"
let environment: DeepWallKidsEnvironment = .sandbox
DeepWallKids.initialize(apiKey: yourApiKey, environment: environment)
```

Replace `{YOUR_API_KEY}` with your app token. You can find this key in your [dashboard](https://console.deepwall.com).

Depending on whether you build your app for testing or for production, you must set environment with one of these values:

```swift
let environment: DeepWallKidsEnvironment = .sandbox
let environment: DeepWallKidsEnvironment = .production
```

**Important:**
> This value should be set to `.sandbox` only during testing your application. Make sure to set the environment to `.production` just before you publish the app.

We use this environment to distinguish between real traffic and test traffic from test devices. It is very important that you keep this value meaningful at all times!

### Configuration

DeepWall need to know following user properties for targeting.

- UUID: `String` 
	- Unique identifer for specifying user profile or device.
- Country: `DeepWallCountry`
	- Two-letter country code -- [ISO 3166-1 alpha-2](https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2)
	- Usage: `DeepWallCountryManager.getCountry(by: "TR") // TURKEY`
- Language: `DeepWallLanguage`
	- Two-letter language code -- [ISO 639-1](https://en.wikipedia.org/wiki/List_of_ISO_639-1_codes)
	- Usage: `DeepWallLanguageManager.getLanguage(by: "tr") // TURKISH`
- Environment Style: `DeepWallEnvironmentStyle`
	- Environment style for paywall appearance.
	- Values:
		- `automatic`: Uses system appearance (Default)
		- `light`: Light appearance
		- `dark`: Dark appearance

**Important:**
> You must call `setUserProperties` method before requesting any paywall.
```swift
let userProperties = DeepWallKidsUserProperties(uuid: uuid, country: country, language: language)

DeepWallKids.shared.setUserProperties(userProperties)
```

#### Updating User Properties

You could update the following user properties with `DeepWallKids.shared.updateUserProperties()` method.

```swift
func updateUserProperties(country: DeepWallCountry? = nil,
			  language: DeepWallLanguage? = nil,
			  environmentStyle: DeepWallEnvironmentStyle? = nil)
```

### Requesting Paywall

For pages to be displayed successfully, it is strongly recommended to wait for ```DeepWallKids.shared.readyStatus``` before sending a page request.

You could use `requestPaywall` method with `action` parameter for showing paywalls.
```swift
// SomeUIViewController.swift

DeepWallKids.shared.requestPaywall(action: "{ACTION_KEY}", in: self)
```
Replace `{ACTION_KEY}` with your related action key. You can find or create action keys in your [dashboard](https://console.deepwall.com).

#### Sending Extra Data

You could also use `extraData`parameter for sending extra data to paywalls.

```swift
// SomeUIViewController.swift

let deepwallExtraData: DeepWallExtraDataType = [
    "some": "value"
]
DeepWallKids.shared.requestPaywall(action: "{ACTION_KEY}", in: self, extraData: deepwallExtraData)
```

### Closing Paywall

You could use `closePaywall` method to close paywalls.

```swift
DeepWallKids.shared.closePaywall()
```

### Event Handling

DeepWall posts some various events depending on ....

- `deepWallKidsPaywallRequested`
	- Fired after paywall requested. Useful for displaying loading indicator in your app.

- `deepWallKidsPaywallResponseReceived`
	- Fired after paywall response received. Useful for hiding loading indicator in your app.

- `deepWallKidsPaywallOpened`
	- Paywall opened event
	- Parameters:
		- pageId: `Int`

 - `deepWallKidsPaywallNotOpened`
	- Paywall not opened event. Fired on error cases only.
	- Parameters:
		- pageId: `Int`

 - `deepWallKidsPaywallActionShowDisabled`
	- Paywall action show disabled event.
		- Parameters:
			- pageId: `Int`

- `deepWallKidsPaywallClosed`
	- Paywall closed event
	- Parameters:
		- pageId: `Int`

- `deepWallKidsPaywallResponseFailure`
	- Paywall response failure event
	- Parameters:
		- errorCode: `String`
		- reason: `String`

- `deepWallKidsPaywallPurchasingProduct`
	- Paywall purchasing product event
	- Parameters:
		- productCode: `String`

- `deepWallKidsPaywallPurchaseSuccess`
	- Purchase success event. *Fired after receipt validation if Ploutos service active.*
	- Parameters:
		- type: `PloutosValidationType`
		- result: `PLPurchaseResponse`
			- subscriptions: `Array of SubscriptionItem`
			- products: `Array of ProductItem`

- `deepWallKidsPaywallPurchaseFailed`
	- Purchase failed event
	- Parameters:
		- productCode: `String`
		- reason: `String`
		- errorCode: `String`
		- isPaymentCancelled: `Bool`

- `deepWallKidsPaywallRestoreSuccess`
	- Restore success event

- `deepWallKidsPaywallRestoreFailed`
	- Restore failed event
	- Parameters:
		- reason: `RestoreFailedReason`
			- .noReceipt
			- .failed
		- errorCode: `String`
		- errorText: `String?`
		- isPaymentCancelled: `Bool`

- `deepWallKidsPaywallExtraDataReceived`
	- Extra data received event
	- Parameters:
		- DeepWallExtraDataType model


#### Usage Example

First implement `DeepWallKidsNotifierDelegate` protocol to your class. Then you could use `observeEvents` method for observing events.
```swift
DeepWallKids.shared.observeEvents(for: self)
```

For removing observer, you could use `removeObserver` method.
```swift
DeepWallKids.shared.removeObserver(for: self)
```

## Requirements

- iOS 10.0+
- Xcode 11.0+
- Swift 5.0+

## Additional Features

- Dark Mode support
- Automatic in app purchase flows
