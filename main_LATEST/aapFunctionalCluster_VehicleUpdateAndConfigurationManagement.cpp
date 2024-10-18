/******************************************************************************/
/* File   : aapFunctionalCluster_VehicleUpdateAndConfigurationManagement.cpp  */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "interface_VehicleUpdateAndConfigurationManagement_VehiclePackageManagement.hpp"
#include "interface_VehicleUpdateAndConfigurationManagement_VehicleDriverApplication.hpp"
#include "interface_VehicleUpdateAndConfigurationManagement_VehicleStateManager.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class aapFunctionalCluster_VehicleUpdateAndConfigurationManagement:
      public interface_VehicleUpdateAndConfigurationManagement_VehiclePackageManagement
   ,  public interface_VehicleUpdateAndConfigurationManagement_VehicleDriverApplication
   ,  public interface_VehicleUpdateAndConfigurationManagement_VehicleStateManager
{
   public:
      uint8 RequestedPackage;
      uint8 TransferState;
      uint8 VehicleConditions;

      uint8 ApprovalRequired;
      uint8 CampaignState;
//    uint8 VehicleConditions;

//    uint8 VehicleConditions;

      void AllowCampaign           (void);
      void CancelCampaign          (void);
      void DeleteTransfer          (void);
      void GetCampaignHistory      (void);
      void GetSwClusterInfo        (void);
      void GetSwPackages           (void);
      void GetVehicleUCMInfo       (void);
      void SwPackageInventory      (void);
      void TransferData            (void);
      void TransferExit            (void);
      void TransferStart           (void);
      void TransferVehiclePackage  (void);

//    void AllowCampaign           (void);
//    void CancelCampaign          (void);
      void DriverApproval          (void);
//    void GetCampaignHistory      (void);
      void GetSwClusterDescription (void);
      void GetSwPackageDescription (void);
      void GetSwProcessProgress    (void);
      void GetSwTransferProgress   (void);

      void SafetyState             (void);
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
void aapFunctionalCluster_VehicleUpdateAndConfigurationManagement::AllowCampaign(void){
}

void aapFunctionalCluster_VehicleUpdateAndConfigurationManagement::CancelCampaign(void){
}

void aapFunctionalCluster_VehicleUpdateAndConfigurationManagement::DeleteTransfer(void){
}

void aapFunctionalCluster_VehicleUpdateAndConfigurationManagement::GetCampaignHistory(void){
}

void aapFunctionalCluster_VehicleUpdateAndConfigurationManagement::GetSwClusterInfo(void){
}

void aapFunctionalCluster_VehicleUpdateAndConfigurationManagement::GetSwPackages(void){
}

void aapFunctionalCluster_VehicleUpdateAndConfigurationManagement::GetVehicleUCMInfo(void){
}

void aapFunctionalCluster_VehicleUpdateAndConfigurationManagement::SwPackageInventory(void){
}

void aapFunctionalCluster_VehicleUpdateAndConfigurationManagement::TransferData(void){
}

void aapFunctionalCluster_VehicleUpdateAndConfigurationManagement::TransferExit(void){
}

void aapFunctionalCluster_VehicleUpdateAndConfigurationManagement::TransferStart(void){
}

void aapFunctionalCluster_VehicleUpdateAndConfigurationManagement::TransferVehiclePackage(void){
}


//void aapFunctionalCluster_VehicleUpdateAndConfigurationManagement::AllowCampaign(void){
//}

//void aapFunctionalCluster_VehicleUpdateAndConfigurationManagement::CancelCampaign(void){
//}

void aapFunctionalCluster_VehicleUpdateAndConfigurationManagement::DriverApproval(void){
}

//void aapFunctionalCluster_VehicleUpdateAndConfigurationManagement::GetCampaignHistory(void){
//}

void aapFunctionalCluster_VehicleUpdateAndConfigurationManagement::GetSwClusterDescription(void){
}

void aapFunctionalCluster_VehicleUpdateAndConfigurationManagement::GetSwPackageDescription(void){
}

void aapFunctionalCluster_VehicleUpdateAndConfigurationManagement::GetSwProcessProgress(void){
}

void aapFunctionalCluster_VehicleUpdateAndConfigurationManagement::GetSwTransferProgress(void){
}


void aapFunctionalCluster_VehicleUpdateAndConfigurationManagement::SafetyState(void){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
