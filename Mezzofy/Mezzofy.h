//
//  Mezzofy.h
//  Mezzofy
//
//  Created by Mezzofy on 13/02/18.
//  Copyright © 2018 Mezzofy. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for Mezzofy.
FOUNDATION_EXPORT double MezzofyVersionNumber;

//! Project version string for Mezzofy.
FOUNDATION_EXPORT const unsigned char MezzofyVersionString[];
//Common
#import <Mezzofy/MZUtils.h>
#import <Mezzofy/MZCouponConfig.h>
//Data
#import <Mezzofy/DataReaponseDataModel.h>
#import <Mezzofy/DataResponseSizeData.h>
#import <Mezzofy/CampaignData.h>
#import <Mezzofy/CampaignCodeData.h>
#import <Mezzofy/CampaignGroupData.h>
#import <Mezzofy/CampaignGroupDtlData.h>
#import <Mezzofy/CampaignGroupDtlsData.h>
#import <Mezzofy/CampaignGroupsData.h>
#import <Mezzofy/CampaignImageData.h>
#import <Mezzofy/CampaignImageListDataModel.h>
#import <Mezzofy/CampaignSearchDataModel.h>
#import <Mezzofy/CampaignSiteData.h>
#import <Mezzofy/CampaignSiteListDataModel.h>
#import <Mezzofy/CampGrpData.h>
#import <Mezzofy/CountryData.h>
#import <Mezzofy/CountryListDataModel.h>
#import <Mezzofy/CountryDataModel.h>
#import <Mezzofy/CouponData.h>
#import <Mezzofy/CustomerCouponData.h>
#import <Mezzofy/CustomerCouponListDataModel.h>
#import <Mezzofy/CustomerCouponDataModel.h>
#import <Mezzofy/CustomerData.h>
#import <Mezzofy/CustomerDeviceData.h>
#import <Mezzofy/CustomerDeviceDataModel.h>
#import <Mezzofy/CustomerGroupData.h>
#import <Mezzofy/CustomerGroupListDataModel.h>
#import <Mezzofy/CustomerGroupDataModel.h>
#import <Mezzofy/CustomerDataModel.h>
#import <Mezzofy/GiftcouponData.h>
#import <Mezzofy/GiftcouponDataModel.h>
#import <Mezzofy/MasscouponData.h>
#import <Mezzofy/MasscouponDetailData.h>
#import <Mezzofy/MasscouponDetailDataModel.h>
#import <Mezzofy/MasscouponDataModel.h>
#import <Mezzofy/MerchantData.h>
#import <Mezzofy/MerchantDataModel.h>
#import <Mezzofy/NotificationData.h>
#import <Mezzofy/NotificationListDataModel.h>
#import <Mezzofy/NotificationDataModel.h>
#import <Mezzofy/OrderData.h>
#import <Mezzofy/OrderItemData.h>
#import <Mezzofy/OrderItemDataModel.h>
#import <Mezzofy/OrderListDataModel.h>
#import <Mezzofy/OrderDataModel.h>
#import <Mezzofy/OrderModifierData.h>
#import <Mezzofy/OrderModifierDataModel.h>
#import <Mezzofy/OrderTrackData.h>
#import <Mezzofy/OrderTrackDataModel.h>
#import <Mezzofy/OverCouponData.h>
#import <Mezzofy/PaymentData.h>
#import <Mezzofy/PaymentDtlData.h>
#import <Mezzofy/PaymentMasterData.h>
#import <Mezzofy/PaymentDataModel.h>
#import <Mezzofy/ProductData.h>
#import <Mezzofy/ProductListData.h>
#import <Mezzofy/ProductListsData.h>
#import <Mezzofy/ProductOrderData.h>
#import <Mezzofy/ProductOrderDtlData.h>
#import <Mezzofy/ProductOrderListDataModel.h>
#import <Mezzofy/ProductOrderMasterData.h>
#import <Mezzofy/ProductOrderDataModel.h>
#import <Mezzofy/SiteData.h>
#import <Mezzofy/SiteListData.h>
#import <Mezzofy/SiteDataModel.h>
#import <Mezzofy/StockData.h>
#import <Mezzofy/StockDataModel.h>
#import <Mezzofy/WalletData.h>
#import <Mezzofy/WalletDataModel.h>
#import <Mezzofy/WalletTxnData.h>
#import <Mezzofy/WalletTxnListDataModel.h>
#import <Mezzofy/WalletTxnDataModel.h>
//ResponseData
#import <Mezzofy/MZCustomerResponse.h>
#import <Mezzofy/MZCustomerGroupResponse.h>
#import <Mezzofy/MZWalletResponse.h>
#import <Mezzofy/MZWalletTransactionResponse.h>
#import <Mezzofy/MZWalletTransactionListResponse.h>
#import <Mezzofy/MZSiteResponse.h>
#import <Mezzofy/MZCountryResponse.h>
#import <Mezzofy/MZRegsisterResponse.h>
#import <Mezzofy/MZCampaignDetailResponse.h>
#import <Mezzofy/MZCampaignOrderResponse.h>
#import <Mezzofy/MZCampaignResponse.h>
#import <Mezzofy/MZCampaignGroupResponse.h>
#import <Mezzofy/MZPaymentResponse.h>
#import <Mezzofy/MZNotificationResponse.h>
#import <Mezzofy/MZMerchantResponse.h>
#import <Mezzofy/MZCouponResponse.h>
#import <Mezzofy/MZCouponSiteResponse.h>
#import <Mezzofy/MZCouponOrderResponse.h>
#import <Mezzofy/MZCouponOrderListResponse.h>
#import <Mezzofy/MZCouponMassRedeemResponse.h>
#import <Mezzofy/MZCouponGiftResponse.h>
#import <Mezzofy/MZCouponStockResponse.h>
#import <Mezzofy/MZCouponSizeResponse.h>
#import <Mezzofy/MZCouponProductOrderResponse.h>
#import <Mezzofy/MZCouponOverResponse.h>
#import <Mezzofy/MZCampaignProductOrderListResponse.h>
//Module
#import <Mezzofy/MZMerchant.h>
#import <Mezzofy/MZNotification.h>
#import <Mezzofy/MZPayment.h>
#import <Mezzofy/MZCampaign.h>
#import <Mezzofy/MZCampaignOrder.h>
#import <Mezzofy/MZRegsister.h>
#import <Mezzofy/MZSite.h>
#import <Mezzofy/MZWallet.h>
#import <Mezzofy/MZWalletTopUpTransaction.h>
#import <Mezzofy/MZCoupon.h>
#import <Mezzofy/MZCouponOrder.h>
#import <Mezzofy/MZCouponPayment.h>
#import <Mezzofy/MZCustomer.h>
#import <Mezzofy/MZMassRedeem.h>




