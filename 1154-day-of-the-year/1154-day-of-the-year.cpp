class Solution {
public:
    bool isLeapYear(int year) {
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}
    int dayOfYear(string date) {
        int year = stoi(date.substr(0, 4));
        int month = stoi(date.substr(5, 2));
        int day = stoi(date.substr(8, 2));
        int ans = 0;
        int jan = 31;
        int mar = 31;
        int apr = 30;
        int may = 31;
        int jun = 30;
        int jul = 31;
        int aug = 31;
        int sep = 30;
        int oct = 31;
        int nov = 30;
        int dec = 31;

        if(month == 1){
            ans = day;
        }

        else if(month == 2){
            ans = day + jan;
        }

        else if(month == 3){
            if(isLeapYear(year) == true){
                ans = day + jan + 29;
            }
            else{
                ans = day + jan + 28;
            } 
        }

        else if(month == 4){
            if(isLeapYear(year) == true){
                ans = day + jan + 29 + mar;
            }
            else{
                ans = day + jan + 28 + mar;
            } 
        }

        else if(month == 5){
            if(isLeapYear(year) == true){
                ans = day + jan + 29 + mar + apr;
            }
            else{
                ans = day + jan + 28 + mar + apr;
            } 
        }

        else if(month == 6){
            if(isLeapYear(year) == true){
                ans = day + jan + 29 + mar + apr + may;
            }
            else{
                ans = day + jan + 28 + mar + apr + may;
            } 
        }

          else if(month == 7){
            if(isLeapYear(year) == true){
                ans = day + jan + 29 + mar + apr + may + jun;
            }
            else{
                ans = day + jan + 28 + mar + apr + may + jun;
            } 
        }

          else if(month == 8){
            if(isLeapYear(year) == true){
                ans = day + jan + 29 + mar + apr + may + jun + jul;
            }
            else{
                ans = day + jan + 28 + mar + apr + may + jun + jul;
            } 
        }

        else if(month == 9){
            if(isLeapYear(year) == true){
                ans = day + jan + 29 + mar + apr + may + jun + jul + aug;
            }
            else{
                ans = day + jan + 28 + mar + apr + may + jun + jul + aug;
            } 
        }

        else if(month == 10){
            if(isLeapYear(year) == true){
                ans = day + jan + 29 + mar + apr + may + jun + jul + aug + sep;
            }
            else{
                ans = day + jan + 28 + mar + apr + may + jun + jul + aug + sep;
            } 
        }

        else if(month == 11){
            if(isLeapYear(year) == true){
                ans = day + jan + 29 + mar + apr + may + jun + jul + aug + sep + oct;
            }
            else{
                ans = day + jan + 28 + mar + apr + may + jun + jul + aug + sep + oct;
            } 
        }

        else if(month == 12){
            if(isLeapYear(year) == true){
                ans = day + jan + 29 + mar + apr + may + jun + jul + aug + sep + oct + nov;
            }
            else{
                ans = day + jan + 28 + mar + apr + may + jun + jul + aug + sep + oct + nov;
            } 
        }
        return ans;
    }
};