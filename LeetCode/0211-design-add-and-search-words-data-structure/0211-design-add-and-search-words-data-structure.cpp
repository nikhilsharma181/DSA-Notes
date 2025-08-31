
struct Trienode{
//
Trienode* childerns[26];
bool leaf;
Trienode(){
leaf=false;
for (int i = 0; i < 26; i++) {childerns[i] = nullptr;}
}
};







class WordDictionary {
   Trienode* root;
public:
    WordDictionary() {
      
        root=new Trienode();
    }
    
    void addWord(string word) {
     Trienode* node=root;
for(auto ch:word){
if(!node->childerns[ch-'a']){
node->childerns[ch-'a']=new Trienode();
}
node=node->childerns[ch-'a'];
}
node->leaf=true;   
    }
    
    bool search(string word) {
        return matchDotSearch(root,word,0);
        

}

    bool matchDotSearch(Trienode* node ,string word ,int   i) {
  if(!node){return false;}
       if(i==word.size()){
        return node->leaf;
       }

     
if( word[i]=='.' ){
    for(int j=0;j<26;j++){
         if(matchDotSearch(node->childerns[j],word,i+1)){
            return true;
         }
         
    }
    return  false;

}
else{
     char ch = word[i];
   return  matchDotSearch(node->childerns[ch-'a'],word,i+1);

}
    }

};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */