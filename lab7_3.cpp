char before(char x){
    if(x>='A'&&x<='Z'){
        if(x=='A'){
        return 'Z';
    }
    return x-1;
}else{
    return '0';
}

}