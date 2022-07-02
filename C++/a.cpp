const int t_size = 1024 ;

{ std::shared_ptr < unsigned char > aa ( new unsigned char [ t_size ] , std::default_delete < unsigned char [ ] > ( ) ) ; }
{ std::shared_ptr < void > memory ( ::malloc ( t_size ) , ::free ) ; }
{ std::shared_ptr < unsigned char [ ] > aa ( new unsigned char [ t_size ] ) ; } // C++ 17
