class Solution {
public:
    string simplifyPath(string path) {
//         int n=path.length();
//         string st="";
//         for(int i=0;i<n;)
//         {
//             if(path[i]=='/' && path[i++] !='/')
//             {
//                 st +=path[i];
//                 i++;
//             }
//             else if(path[i]=='/' && path[i++] =='/' && path[i=i+2] !='/')
//             {
//                 st +=path[i];
//                 i=i+2;
//             }
//             else if(path[i]=='/' && path[i++] =='/' && path[i=i+2]=='/')
//             {
//                 st +=path[i];
//                 i=i+3;
//             }
//             else if(path[i]=='.' && path[i++] !='.')
//             {
//                 i=i+1;
//             }
//             else if(path[i]=='.' && path[i++]=='.' && path[i=i+2] !='.')
//             {
//                 i=i+2;
//             }
// else if(path[i]=='.' && path[i++]=='.' && path[i=i+2] =='.' && path[i=i+3] !='.')
//             {
//                 st +=path[i];
//                 st +=path[i++];
//                 st +=path[i=i+2];
//                 i=i+3;
//             }
// else if(path[i]=='.' && path[i++]=='.' && path[i=i+2] =='.' && path[i=i+3] =='.')
//             {
//                 st +=path[i];
//                 st +=path[i++];
//                 st +=path[i=i+2];
//                 st +=path[i=i+3];
//                 i=i+4;
//             }

//             else{
//                 st +=path[i];
//                 i++;
//             }
//         }
        
//         return st;




        string result = "";
        vector<string> folder;  
        int n = path.length();
        int i = 0;

        while (i < n) {
            while (i < n && path[i] == '/') i++;

            string name = "";
            while (i < n && path[i] != '/') {
                name += path[i];
                i++;
            }

            if (name == "" || name == ".") {
             
            } else if (name == "..") {
                if (!folder.empty()) folder.pop_back(); 
            } else {
                folder.push_back(name);
            }
        }

        for (string s : folder) {
            result += "/" + s;
        }

        return result.empty() ? "/" : result;
    }
};