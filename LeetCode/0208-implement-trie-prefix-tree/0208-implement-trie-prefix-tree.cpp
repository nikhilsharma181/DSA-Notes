struct Trienode{
    //
    Trienode* childerns[26];
     bool leaf;
     Trienode(){
        leaf=false;
        for (int i = 0; i < 26; i++) {childerns[i] = nullptr;}
       
     }
};
class Trie {

 Trienode*  root;
public:
    Trie() {

         root=new Trienode();

        
    }
    
    void insert(string word) {
         Trienode*  node=root;
         for(auto ch:word){
             if(!node->childerns[ch-'a']){
                node->childerns[ch-'a']=new  Trienode();
                
             }
             node=node->childerns[ch-'a'];
         }
         node->leaf=true;

        
    }
    
    bool search(string word) {
        Trienode*  node=root;
         for(auto ch:word){
             if(!node->childerns[ch-'a']){
                return false;
                
               
             }
             node=node->childerns[ch-'a'];
         }
         return node->leaf;
        
    }
    
    bool startsWith(string prefix) {
        //prefix
     Trienode*  node=root;
         for(auto ch:prefix){
             if(!node->childerns[ch-'a']){
                return false;
                
               
             }
             node=node->childerns[ch-'a'];
         }
         return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */