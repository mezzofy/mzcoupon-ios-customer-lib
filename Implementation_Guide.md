
<h1 align="center">MZCoupon</h1>

## MzCoupon Full Implementation Guide.
<p align="center">
<img src="http://www.mezzofy.com/images/logoz.png">
</p>

#### **_Note_** : Basic Authorization enabled for all API
### 1) New User Registration

- Step 1 - Get the Country List 
    - GET Method : `http://platform.mezzofy.com/api/v1/countries`
        - Get results in [MZCountryResponse](https://github.com/mezzofy/mzcoupon-ios-customer-lib/blob/master/MZCoupon/DataResponse/Regsister/MZCountryResponse.h)
            - Get Country Code from [CountryData](https://github.com/mezzofy/mzcoupon-ios-customer-lib/blob/master/MZCoupon/Pojo/CountryData.h) in [CountryDataModel](https://github.com/mezzofy/mzcoupon-ios-customer-lib/blob/master/MZCoupon/Pojo/CountryDataModel.h)
- Step 2: Prepare and Register Customer
    - Prepare record set with following mandatory Fields. In [CustomerData](https://github.com/mezzofy/mzcoupon-ios-customer-lib/blob/master/MZCoupon/Pojo/CustomerData.h)
        1. `customerFirstName`
        2. `countryCode`   **{From Country List}**
        3. `customerMobile`
        4. `customerEmail`
        5. `customerPassword`
        6. `userType` default to "C"
- Step 3: Prepare Request
    - Prepare record set [CustomerDataModel](https://github.com/mezzofy/mzcoupon-ios-customer-lib/blob/master/MZCoupon/Pojo/CustomerData.h)
        1. `customer` 
        - Call Register Customer method 
        * POST Method: `http://yoursubdomain.mezzofy.com/api/v1/customers` 
        * Request Body: [CustomerDataModel](https://github.com/mezzofy/mzcoupon-ios-customer-lib/blob/master/MZCoupon/Pojo/CustomerDataModel.h)
        - Upon Successful Registration API Return [MZRegsisterResponse](https://github.com/mezzofy/mzcoupon-ios-customer-lib/blob/master/MZCoupon/DataResponse/Regsister/MZRegsisterResponse.h)

### 2) Sign In
    * #### 2.1 Normal Sign In
        - Step 1: Prepare and SingIn Customer
            - Prepare record set with following mandatory Fields. In [CustomerData](https://github.com/mezzofy/mzcoupon-ios-customer-lib/blob/master/MZCoupon/Pojo/CustomerData.h)
                1. `customerEmail`
                2. `customerPassword`
            - Prepare record set with following mandatory Fields. [CustomerDeviceData](https://github.com/mezzofy/mzcoupon-ios-customer-lib/blob/master/MZCoupon/Pojo/CustomerDeviceData.h)
                1. `DeviceUuid`
                2. `DeviceName` for iOS set Default "I"
                3. `DeviceToken`
            - Prepare Request  [CustomerDeviceDataModel](https://github.com/mezzofy/mzcoupon-ios-customer-lib/blob/master/MZCoupon/Pojo/CustomerDeviceDataModel.h)
                1. `Customer`  
                2. `Device` 
            - Call Register Customer method 
            - POST Method: `http://yoursubdomain.mezzofy.com/api/v1/customers`
            - Request Body: [CustomerDeviceDataModel](https://github.com/mezzofy/mzcoupon-ios-customer-lib/blob/master/MZCoupon/Pojo/CustomerDeviceDataModel.h)
            - Upon Successful Registration API Return [MZCustomerResponse](https://github.com/mezzofy/mzcoupon-ios-customer-lib/blob/master/MZCoupon/DataResponse/Customer/MZCustomerResponse.h)
    * #### 2.2 Facebook Sign In
        - Step 1: Prepare and SingIn Customer
        - Prepare record set with following mandatory Fields. In [CustomerData](https://github.com/mezzofy/mzcoupon-ios-customer-lib/blob/master/MZCoupon/Pojo/CustomerData.h)
            1. `customerEmail`
            2. `fbToken`
        - Prepare record set with following mandatory Fields. [CustomerDeviceData](https://github.com/mezzofy/mzcoupon-ios-customer-lib/blob/master/MZCoupon/Pojo/CustomerDeviceData.h)
            1. `DeviceUuid`
            2. `DeviceName` for iOS set Default "I"
            3. `DeviceToken`
        - Prepare Request  [CustomerDeviceDataModel](https://github.com/mezzofy/mzcoupon-ios-customer-lib/blob/master/MZCoupon/Pojo/CustomerDeviceDataModel.h)
            1. `Customer`  
            2. `Device` 
        - Call Register Customer method 
        - POST Method: `http://yoursubdomain.mezzofy.com/api/v1/customers/facebookauth`
        - Request Body: CustomerDataModel
        - Upon Successful Registration API Return [MZCustomerResponse](https://github.com/mezzofy/mzcoupon-ios-customer-lib/blob/master/MZCoupon/DataResponse/Customer/MZCustomerResponse.h)

    * #### 2.3 Forgot Password
        - Step 1: Prepare For ForgotPassword
        - Prepare record set with following mandatory Fields. In [CustomerData](https://github.com/mezzofy/mzcoupon-ios-customer-lib/blob/master/MZCoupon/Pojo/CustomerData.h)
            1. `customerEmail`
        - Step 2: Prepare Request
        - Prepare record set [CustomerDataModel](https://github.com/mezzofy/mzcoupon-ios-customer-lib/blob/master/MZCoupon/Pojo/CustomerData.h)
            1. `customer` 
        - Step 3: Call Forgot Password Method
        - POST Method: `http://yoursubdomain.mezzofy.com/api/v1/customers/forget`
        - Request Body: CustomerDataModel
        - Upon Successful ForgotPassword API Return [MZCustomerResponse](https://github.com/mezzofy/mzcoupon-ios-customer-lib/blob/master/MZCoupon/DataResponse/Customer/MZCustomerResponse.h)
### 3)   Campaign List
    * #### 3.1 Top Campaign List
        - Step 1: Call Top Camapign List Method
        - GET Method: `http://yoursubdomain.mezzofy.com/api/v1/campaigns/topcoupon`
        - Upon Successful Return [MZCampaignResponse](https://github.com/mezzofy/mzcoupon-ios-customer-lib/blob/master/MZCoupon/DataResponse/Campaign/MZCampaignResponse.h)
    * #### 3.2 Campaign List
        - Step 1: Call Camapign List Method
        - GET Method: `http://yoursubdomain.mezzofy.com/api/v1/campaigns/customercampaigns`
        - Parameter 
            1. `status` Default Value "A"
            2. `page` Pagination Page Number
            3. `latitude` Send Current Device Latitude
            4. `longitude` Send Current Device Longitude
        - Upon Successful Return [MZCampaignResponse](https://github.com/mezzofy/mzcoupon-ios-customer-lib/blob/master/MZCoupon/DataResponse/Campaign/MZCampaignResponse.h)
    * #### 3.2 Campaign List With filter
        - Step 1: Campaign Filter with Site [See 7.SiteList]
        - Store Selected SiteId in Array format [SiteData](https://github.com/mezzofy/mzcoupon-ios-customer-lib/blob/master/MZCoupon/Pojo/StockData.h)
        - Step 2: Campaign Filter with Campaign Group [See 4.CampaignGroup]
        - Store Selected campgrpId in Array format [CampaignData](https://github.com/mezzofy/mzcoupon-ios-customer-lib/blob/master/MZCoupon/Pojo/CampaignData.h)
        - Step 3: Prepare record set with following Fields [CampaignSearchDataModel](https://github.com/mezzofy/mzcoupon-ios-customer-lib/blob/master/MZCoupon/Pojo/CampaignSearchDataModel.m)
            1. `sites` For all Site Set Empty Array
            2. `groups` For all Groups Set Empty Array
            3. `latitude` Send Current Device Latitude
            4. `longitude` Send Current Device Longitude
        - Step 4: Call Camapign List Method
        - POST Method: `http://yoursubdomain.mezzofy.com/api/v1/campaigns/campaignsearch`
        - Upon Successful Return [MZCampaignResponse](https://github.com/mezzofy/mzcoupon-ios-customer-lib/blob/master/MZCoupon/DataResponse/Campaign/MZCampaignResponse.h)
    * #### 3.3 Campaign Detail 
        - Step 1: Call Camapign Detail Method
        - GET Method: `http://yoursubdomain.mezzofy.com/api/v1/campaigns/campaigndistance/{CampaignID}`
        - Parameter 
            1. `status` Default Value "A"
            2. `latitude` Send Current Device Latitude
            3. `longitude` Send Current Device Longitude
        - Upon Successful Return [MZCampaignResponse](https://github.com/mezzofy/mzcoupon-ios-customer-lib/blob/master/MZCoupon/DataResponse/Campaign/MZCampaignResponse.h)
    * ##### 3.3.1 Download Coupon
        - Step 1: Check Coupon Avilability in Campaign
        - GET Method :  `http://yoursubdomain.mezzofy.com/api/v1/pos/overcoupon/{CampaignID}`
        - Parameter
            1. `qty` Number of Coupons _[eg: Return Count must be Greater than Required coupon]_
        - Upon Successful Return [MZCouponOverResponse](https://github.com/mezzofy/mzcoupon-ios-customer-lib/blob/master/MZCoupon/DataResponse/Campaign/MZCouponOverResponse.h)
        - Step 2: Find Campaign is Free Or Charageable by in [ProductData](https://github.com/mezzofy/mzcoupon-ios-customer-lib/blob/master/MZCoupon/Pojo/ProductData.h)
            1. If `brand` is 'C' Charge Coupon
            2. If `brand` is 'F' Free Coupon
        - Step 3: Download Free Coupon 
            1.Prepare For download Free coupon 
                - I ) Prepare DataSet [ProductOrderData](https://github.com/mezzofy/mzcoupon-ios-customer-lib/blob/master/MZCoupon/Pojo/ProductOrderData.h)
                    - `customerId` Set CustomerID
                    - `poId` Generate UUID and set
                    - `poStatus` _Default set as ' A '_
                    - `payReceipt` Empty String
                    - `payResponse` _Defalut set as ' 0 '_
                    - `couponType` _Set ' F ' for Free Coupon_
                - II ) Prepare DataSet [ProductOrderDtlData](https://github.com/mezzofy/mzcoupon-ios-customer-lib/blob/master/MZCoupon/Pojo/ProductOrderDtlData.h)
                    - `campaignId` From [ProductData](https://github.com/mezzofy/mzcoupon-ios-customer-lib/blob/master/MZCoupon/Pojo/ProductOrderData.h)
                    - `campaignQty` Required Quantity
                - III )Prepare Dataset [ProductOrderDataModel](https://github.com/mezzofy/mzcoupon-ios-customer-lib/blob/master/MZCoupon/Pojo/ProductOrderDataModel.h)
                    - `podetail` 
                - IV )Prepare Dataset [ProductOrderListDataModel](https://github.com/mezzofy/mzcoupon-ios-customer-lib/blob/master/MZCoupon/Pojo/ProductOrderListDataModel.h)
                    - `po` 
                    - `poDetails`
                - V ) Send Datato server
                    - POST Method :`http://yoursubdomain.mezzofy.com/api/v1/pos`
                    - Request Body [ProductOrderListDataModel](https://github.com/mezzofy/mzcoupon-ios-customer-lib/blob/master/MZCoupon/Pojo/ProductOrderListDataModel.h)
                    - Upon Successful Response [MZCouponProductOrderResponse](https://github.com/mezzofy/mzcoupon-ios-customer-lib/blob/master/MZCoupon/DataResponse/Coupon/MZCouponProductOrderResponse.h)
            - Step 4: Download Charge Coupon 
                1.Prepare For download Charge coupon 
                    - I ) Prepare DataSet [ProductOrderData](https://github.com/mezzofy/mzcoupon-ios-customer-lib/blob/master/MZCoupon/Pojo/ProductOrderData.h)
                        - `customerId` Set CustomerID
                        - `poId` Generate UUID and set
                        - `poStatus` _Default set as ' A '_
                        - `payReceipt` Empty String
                        - `payResponse` _Defalut set as ' 0 '_
                        - `couponType` _Set ' C' for charge Coupon_
                    - II ) Prepare DataSet [ProductOrderDtlData](https://github.com/mezzofy/mzcoupon-ios-customer-lib/blob/master/MZCoupon/Pojo/ProductOrderDtlData.h)
                        - `campaignId` From [ProductData](https://github.com/mezzofy/mzcoupon-ios-customer-lib/blob/master/MZCoupon/Pojo/ProductOrderData.h)
                        - `campaignQty` Required Quantity
                    - III )Prepare Dataset [ProductOrderDataModel](https://github.com/mezzofy/mzcoupon-ios-customer-lib/blob/master/MZCoupon/Pojo/ProductOrderDataModel.h)
                        - `podetail` 
                    - IV )Prepare Dataset [ProductOrderListDataModel](https://github.com/mezzofy/mzcoupon-ios-customer-lib/blob/master/MZCoupon/Pojo/ProductOrderListDataModel.h)
                        - `po` 
                        - `poDetails`
                    - V ) Send Datato server
                        - POST Method :`http://yoursubdomain.mezzofy.com/api/v1/pos`
                        - Request Body [ProductOrderListDataModel](https://github.com/mezzofy/mzcoupon-ios-customer-lib/blob/master/MZCoupon/Pojo/ProductOrderListDataModel.h)
                        - Upon Successful Response [MZCouponProductOrderResponse](https://github.com/mezzofy/mzcoupon-ios-customer-lib/blob/master/MZCoupon/DataResponse/Coupon/MZCouponProductOrderResponse.h)
                    - VI ) From Response Get `poId` and make payment via Paypal with `poId` and selected `paymentDetailId`

                - Response you got Successful Payment or Failure Payment
### 4) CampaignGroups
    - Step 1: Call CampaignGroups List Method
    - GET Method: `http://yoursubdomain.mezzofy.com/api/v1/campaigngroups`
    - Upon Successful Return [MZCampaignGroupResponse](https://github.com/mezzofy/mzcoupon-ios-customer-lib/blob/master/MZCoupon/DataResponse/Coupon/MZCampaignGroupResponse.h)

### 5) Coupon
    * #### 5.1 Coupon List (Redeemed and Expired)
        - Step 1: Call Coupon List Method
        - GET Method: `http://yoursubdomain.mezzofy.com/api/v1/customercoupons`
        - Parameter 
            1. `status` For Redeemed Coupon `R` , For Expired Coupon `E`
            2. `customerid` Set CustomerID 
            3. `page` Pagination Page Number
        - Upon Successful Return [MZCouponResponse](https://github.com/mezzofy/mzcoupon-ios-customer-lib/blob/master/MZCoupon/DataResponse/Coupon/MZCouponResponse.h)
    * #### 5.2 Campaign Coupon List (Active Campaign Coupon)
        - Step 1: Call Campaign Coupon List Method
        - GET Method: `http://yoursubdomain.mezzofy.com/api/v1/customercoupons/customercampaigns`
        - Parameter 
            1. `status` Default Value "A"
            2. `customerid` Set CustomerID 
            3. `page` Pagination Page Number
        - Upon Successful Return [MZCouponResponse](https://github.com/mezzofy/mzcoupon-ios-customer-lib/blob/master/MZCoupon/DataResponse/Coupon/MZCouponResponse.h)
    * #### 5.3 Coupon List By Campaign
        - Step 1: Call  Coupon List Campaign Method
        - GET Method: `http://yoursubdomain.mezzofy.com/api/v1/customercoupons/campaign/{CampaignID}`
        - Parameter 
            1. `status` Default Value "A"
            2. `customerid` Set CustomerID 
            3. `page` Pagination Page Number
        - Upon Successful Return [MZCouponResponse](https://github.com/mezzofy/mzcoupon-ios-customer-lib/blob/master/MZCoupon/DataResponse/Coupon/MZCouponResponse.h)
    * #### 5.4 Coupon Details 
        - Step 1: Call  Coupon Details Method
        - GET Method: `http://yoursubdomain.mezzofy.com/api/v1/coupons/{CouponID}`
        - Upon Successful Return [MZCouponSizeResponse](https://github.com/mezzofy/mzcoupon-ios-customer-lib/blob/master/MZCoupon/DataResponse/Coupon/MZCouponSizeResponse.h)
    * #### 5.5 Send Coupon As Gift
        - Step 1: Check Avaliability of User
        -GET Method: `http://yoursubdomain.mezzofy.com/api/v1/customers/customeremail`
        - Parameter
            1. `email` Partner EmailId
        - Upon Successful Return [MZCustomerResponse](https://github.com/mezzofy/mzcoupon-ios-customer-lib/blob/master/MZCoupon/DataResponse/Customer/MZCustomerResponse.h)
        - Step 2: If valid customer 
        - Prepare record set with following mandatory Fields . In [GiftcouponData](https://github.com/mezzofy/mzcoupon-ios-customer-lib/blob/master/MZCoupon/Pojo/GiftcouponData.h)
            1. `Email`
            2. `CustomerId`
            3. `CouponId`
            4. `Notes`
        - Prepare Request with [GiftcouponDataModel](https://github.com/mezzofy/mzcoupon-ios-customer-lib/blob/master/MZCoupon/Pojo/GiftcouponDataModel.h)
            1. `sharecoupon`
        - POST Method: `http://yoursubdomain.mezzofy.com/api/v1/customercoupons/sharecoupon`
        - Request Data [GiftcouponDataModel](https://github.com/mezzofy/mzcoupon-ios-customer-lib/blob/master/MZCoupon/Pojo/GiftcouponDataModel.h)
        - Upon Successful Return [MZCouponGiftResponse](https://github.com/mezzofy/mzcoupon-ios-customer-lib/blob/master/MZCoupon/DataResponse/Coupon/MZCouponGiftResponse.h)
    * #### 5.6 Coupon Stock Details while Redeem
        - Step 1: Call  Coupon Stock Details
        - GET Method: `http://yoursubdomain.mezzofy.com/api/v1/orders/redeamstock/{CampaignID}`
        - Parameter
            1. `couponid` Set CouponID
        - Upon Successful Return [MZCouponStockResponse](https://github.com/mezzofy/mzcoupon-ios-customer-lib/blob/master/MZCoupon/DataResponse/Coupon/MZCouponStockResponse.h)
        * #### 5.7 Check Coupon Stock Details while Place Order 
            - Step 1: Call  Coupon Stock Details
            - GET Method: `http://yoursubdomain.mezzofy.com/api/v1/orders/campaignstock/{CampaignID}`
            - Parameter
                1. `couponid` Set CouponID
            - Upon Successful Return [MZCouponStockResponse](https://github.com/mezzofy/mzcoupon-ios-customer-lib/blob/master/MZCoupon/DataResponse/Coupon/MZCouponStockResponse.h)
    * #### 5.8 Release Coupon Stock 
        - Step 1: Call  Coupon Stock Details
        - GET Method: `http://yoursubdomain.mezzofy.com/api/v1/orders/releasestock/{CampaignID}`
        - Parameter
            1. `couponid` Set CouponID
        - Upon Successful Return [MZCouponStockResponse](https://github.com/mezzofy/mzcoupon-ios-customer-lib/blob/master/MZCoupon/DataResponse/Coupon/MZCouponStockResponse.h)
    * #### 5.9 Redeem Coupon 
    - I ) Redeem Coupon By Merchant Scan 
        - Step 1: From [CouponData](https://github.com/mezzofy/mzcoupon-ios-customer-lib/blob/master/MZCoupon/Pojo/CouponData.h) get `couponId` convert into QR Image. By Merchant Scan CouponId and redeemed. 
    - II ) Redeem Coupon By Enter Site Pass 
        - Step 1: From [CouponData](https://github.com/mezzofy/mzcoupon-ios-customer-lib/blob/master/MZCoupon/Pojo/CouponData.h) get `couponId`.
        - Step 2: while user click QR Image get site Pass and validate 
        - GET Method :`http://yoursubdomain.mezzofy.com/api/v1/sites/sitepass/{Site Pass}`
        - Upon Successful Response return [MZCouponSiteResponse](https://github.com/mezzofy/mzcoupon-ios-customer-lib/blob/master/MZCoupon/DataResponse/Coupon/MZCouponSiteResponse.h)
        - From above method Get `SiteId` From [SiteData](https://github.com/mezzofy/mzcoupon-ios-customer-lib/blob/master/MZCoupon/Pojo/SiteData.h)
        - Prepare Request with [OrderData](https://github.com/mezzofy/mzcoupon-ios-customer-lib/blob/master/MZCoupon/Pojo/OrderData.h)
            - `siteId` set siteId get form SiteData above response 
            - `couponId` Selected CouponId
            - `orderType` Default Set 'R'
            - `customerId` customer Id
        -Prepare Request with [OrderDataModel](https://github.com/mezzofy/mzcoupon-ios-customer-lib/blob/master/MZCoupon/Pojo/OrderDataModel.h)
            -`order`
        - Call POST  Method :`http://yoursubdomain.mezzofy.com/api/v1/orders/}` 
        - Request Body [OrderDataModel](https://github.com/mezzofy/mzcoupon-ios-customer-lib/blob/master/MZCoupon/Pojo/OrderDataModel.h)
        - Upon Successful Response return[MZCouponOrderResponse](https://github.com/mezzofy/mzcoupon-ios-customer-lib/blob/master/MZCoupon/DataResponse/Coupon/MZCouponOrderResponse.h)
    * #### 5.10 Coupon Order Details 
        - Step 1: Coupon Order Details by CouponId
        - GET Method: `http://yoursubdomain.mezzofy.com/api/v1/orders/{CouponID}`
        - Upon Successful Return [MZCouponOrderResponse](https://github.com/mezzofy/mzcoupon-ios-customer-lib/blob/master/MZCoupon/DataResponse/Coupon/MZCouponOrderResponse.h)
    * #### 5.11 Coupon Order Track 
        - Step 1: Coupon Order Track by CouponId
        - GET Method: `http://yoursubdomain.mezzofy.com/api/v1/orders/ordertrack/{CouponID}`
        - Upon Successful Return [MZCouponOrderResponse](https://github.com/mezzofy/mzcoupon-ios-customer-lib/blob/master/MZCoupon/DataResponse/Coupon/MZCouponOrderResponse.h)
### 6) Customer Profile Update
    * #### 6.1 Name and Mobile Number Update
        - Step 1: Prepare record set with following mandatory Fields. In [CustomerData](https://github.com/mezzofy/mzcoupon-ios-customer-lib/blob/master/MZCoupon/Pojo/CustomerData.h)
            1. `customerFirstName`
            2. `customerMobile`
            3. `customerId`
        - Prepare Request  [CustomerDataModel](https://github.com/mezzofy/mzcoupon-ios-customer-lib/blob/master/MZCoupon/Pojo/CustomerDataModel.h)
            1. `customer`  
        - Call Register Customer Edit method 
        - PUT Method: `http://yoursubdomain.mezzofy.com/api/v1/customers/{Customer ID}`
        - Request Body: CustomerDataModel
        - Upon Successful Registration API Return [MZCustomerResponse](https://github.com/mezzofy/mzcoupon-ios-customer-lib/blob/master/MZCoupon/DataResponse/Customer/MZCustomerResponse.h)
    * #### 6.2 Change Password
        - Step 1: Prepare record set with following mandatory Fields. In [CustomerData](https://github.com/mezzofy/mzcoupon-ios-customer-lib/blob/master/MZCoupon/Pojo/CustomerData.h)
            1. `customerPassword`
            2. `customerId`
        - Prepare Request  [CustomerDataModel](https://github.com/mezzofy/mzcoupon-ios-customer-lib/blob/master/MZCoupon/Pojo/CustomerDataModel.h)
            1. `customer`  
        - Call Register Customer Edit method 
        - PUT Method: `http://yoursubdomain.mezzofy.com/api/v1/customers/changepassword`
        - Request Body: CustomerDataModel
        - Upon Successful Registration API Return [MZCustomerResponse](https://github.com/mezzofy/mzcoupon-ios-customer-lib/blob/master/MZCoupon/DataResponse/Customer/MZCustomerResponse.h)
### 7) Site List
    - Step 1: Call Site List Method
    -  GET Method: `http://yoursubdomain.mezzofy.com/api/v1/sites`
    - Parameter
        - `page`
    - Upon Successful Return [MZSiteResponse](https://github.com/mezzofy/mzcoupon-ios-customer-lib/blob/master/MZCoupon/DataResponse/Site/MZSiteResponse.h)
#### _For Detailed Information and Contact us [Click Here](http://www.mezzofy.com/apidoc.html)_

<p align="center">
<b>Thank You</b><br>
<br><br>
</p>




