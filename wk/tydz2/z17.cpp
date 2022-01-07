#include <iostream>
using namespace std;

/*

####################
##                 #
# #                #
#  #               #
#   #              #
#    #             #
#     #            #
#      #           #
#       #          #
#        #         #
#         #        #
#          #       #
#           #      #
#            #     #
#             #    #
#              #   #
#               #  #
#                # #
#                 ##
####################

*/

int main(){
  int max = 20;
  for(int row = 0; row < max; row++){
    for(int col = 0; col < max; col++){
      if(row == 0 || row == max-1 || col == 0 || col == max-1 || row == col){
        cout << "#" << (col == max-1 ? '\n' : ' ');
      }else{
        cout << " " << (col == max-1 ? '\n' : ' ');
      }
    }
  }
}