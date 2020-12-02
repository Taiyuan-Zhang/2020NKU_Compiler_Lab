@0      program    children: [@1   ]
@1      statement_main    children: [@2 @3 @9 @13 @17 @21 @25   ]
@2      type: void    
@3      statement_declare    children: [@4 @5 @7   ]
@4      type: int    
@5      declare node    children: [@6   ]
@6      variable name: a    type: int    
@7      declare node    children: [@8   ]
@8      variable name: s    type: int    
@9      statement_expression    children: [@10   ]
@10     operator type: =    children: [@11 @12   ]
@11     variable name: a    type: int    
@12     const type: int    value:10    
@13     statement_expression    children: [@14   ]
@14     operator type: =    children: [@15 @16   ]
@15     variable name: s    type: int    
@16     const type: int    value:0    
@17     statement_declare    children: [@18 @19   ]
@18     type: char    
@19     declare node    children: [@20   ]
@20     variable name: ch    type: char    
@21     statement_scanf    children: [@22 @23   ]
@22     const type: string value:"%d"    
@23     operator type: address_of    children: [@24   ]
@24     variable name: ch    type: int    
@25     statement_while    children: [@26 @44 @48 @52 @56 @60   ]
@26     operator type: ||    children: [@27 @34   ]
@27     operator type: &&    children: [@28 @31   ]
@28     operator type: >    children: [@29 @30   ]
@29     variable name: a    type: int    
@30     const type: int    value:0    
@31     operator type: <=    children: [@32 @33   ]
@32     variable name: a    type: int    
@33     const type: int    value:10    
@34     operator type: &&    children: [@35 @40   ]
@35     operator type: %    children: [@36 @37   ]
@36     variable name: a    type: int    
@37     operator type: ==    children: [@38 @39   ]
@38     const type: int    value:100    
@39     const type: int    value:10    
@40     operator type: !    children: [@41   ]
@41     operator type: ==    children: [@42 @43   ]
@42     variable name: a    type: int    
@43     const type: int    value:10    
@44     statement_expression    children: [@45   ]
@45     operator type: -=    children: [@46 @47   ]
@46     variable name: a    type: int    
@47     const type: int    value:1    
@48     statement_declare    children: [@49 @50   ]
@49     type: int    
@50     declare node    children: [@51   ]
@51     variable name: a    type: int    
@52     statement_expression    children: [@53   ]
@53     operator type: =    children: [@54 @55   ]
@54     variable name: a    type: int    
@55     const type: int    value:10    
@56     statement_expression    children: [@57   ]
@57     operator type: +=    children: [@58 @59   ]
@58     variable name: s    type: int    
@59     variable name: a    type: int    
@60     statement_if    children: [@61 @66 @69 @73 @77   ]
@61     operator type: uminus    children: [@62   ]
@62     operator type: <    children: [@63 @64   ]
@63     variable name: s    type: int    
@64     operator type: uminus    children: [@65   ]
@65     const type: int    value:10    
@66     statement_printf    children: [@67 @68   ]
@67     const type: string value:"result is: %d\n"    
@68     variable name: s    type: int    
@69     statement_declare    children: [@70 @71   ]
@70     type: int    
@71     declare node    children: [@72   ]
@72     variable name: b    type: int    
@73     statement_expression    children: [@74   ]
@74     operator type: =    children: [@75 @76   ]
@75     variable name: b    type: int    
@76     const type: int    value:10    
@77     statement_for    children: [@78 @83 @86 @88   ]
@78     statement_declare    children: [@79 @80   ]
@79     type: int    
@80     declare node    children: [@81 @82   ]
@81     variable name: i    type: int    
@82     const type: int    value:0    
@83     operator type: <    children: [@84 @85   ]
@84     variable name: i    type: int    
@85     variable name: b    type: int    
@86     operator type: ++    children: [@87   ]
@87     variable name: i    type: int    
@88     statement_printf    children: [@89 @90   ]
@89     const type: string value:"Have fun: %d\n"    
@90     variable name: i    type: int    
