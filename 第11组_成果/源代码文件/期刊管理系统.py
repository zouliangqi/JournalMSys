import tkinter as tk
from tkinter import ttk
from defImageChange import image_change
from Denglu import *
import pymysql.cursors

FUN_ADD=False
User="100010"
color1="#191970 MidnightBlue 午夜蓝"
color2="#4682B4 SteelBlue 钢蓝/铁青"
color3="#B0C4DE LightSteelBlue 亮钢蓝"

total = tk.Tk()   
total.title("欢迎登录期刊管理系统！")
total.resizable(1,1)#宽可变, 高可变

Head_Frame=tk.Frame(total,height=1,bg="#4682B4 SteelBlue 钢蓝/铁青")
#image_change(Head_Frame)
Tail_Frame=tk.Frame(total,height=1,bg="#4682B4 SteelBlue 钢蓝/铁青")

L_Frame=ttk.Notebook(total,width=240)

L_Frame.pack(side=tk.LEFT, fill="y",ipadx=50)




R_Frame = ttk.Notebook(total)
Info_Frame = ttk.Notebook(total)
#####################
tab01=tk.Frame(Info_Frame,bg="#B0C4DE LightSteelBlue 亮钢蓝")            # Create a tab 
Info_Frame.add(tab01, text='   个人信息')
root2 = tk.LabelFrame(tab01,width=80, text='个性头像：',bg="#B0C4DE LightSteelBlue 亮钢蓝")
root2.pack(anchor=tk.S,fill=tk.X,padx=0,ipady=10)
User_photo = tk.PhotoImage(file="头像.gif",height=70,width=70)
tk.Label(root2,pady=10,image=User_photo,compound=tk.CENTER,).pack(pady=10)

#R_Frame.pack(expand=1, fill="both")  # Pack to make visible
###########################Left#################
tab00=tk.Frame(L_Frame,bg="#B0C4DE LightSteelBlue 亮钢蓝")            # Create a tab 
L_Frame.add(tab00, text='      登录',)


#####################
tab02=tk.Frame(L_Frame,bg="#B0C4DE LightSteelBlue 亮钢蓝")            # Create a tab 
L_Frame.add(tab02, text='       注册')
photo2 = tk.PhotoImage(file="教材订购.gif")
theLabel2 = tk.Label(tab02,   # 将内容绑定在  root 初始框上面
						padx=100,   image=photo2,height=200,width=240,   #载入图片
                   compound=tk.CENTER,bg="#B0C4DE LightSteelBlue 亮钢蓝")
theLabel2.pack(fill=tk.X)
ZhuCe(tab02,total)
###########################Left#################

photo1 = tk.PhotoImage(file="欢迎新同学.gif")
theLabel = tk.Label(tab00,   # 将内容绑定在  root 初始框上面
padx=100,image=photo1,height=200,width=240,   #载入图片
                   compound=tk.CENTER,bg="#B0C4DE LightSteelBlue 亮钢蓝")
                   
#textLabel.pack(fill=BOTH, expand=1)   # 致命 textlabel 在初识框 中的位置
#textLabel.pack(side=LEFT)
# 创建一个图像Label对象
theLabel.pack(fill=tk.X)     # 自动调整布局

root = tk.LabelFrame(tab00,width=240, text='请输入账号及密码：',bg="#B0C4DE LightSteelBlue 亮钢蓝")
  
root.pack(anchor=tk.S,fill=tk.BOTH,padx=0,ipady=0)

tk.Label(root,text='帐号 :',font=("宋体", 15),bg="#B0C4DE LightSteelBlue 亮钢蓝").grid(row=0,column=0,pady=20) # 对Label内容进行 表格式 布局
tk.Label(root,text='密码 :',font=("宋体", 15),bg="#B0C4DE LightSteelBlue 亮钢蓝").grid(row=1,column=0,pady=20)
tk.Label(root,text='验证码 :',font=("宋体", 15),bg="#B0C4DE LightSteelBlue 亮钢蓝").grid(row=2,column=0,pady=20)
v1=tk.StringVar()   
v2=tk.StringVar()
v3=tk.StringVar()

e1 = tk.Entry(root,textvariable=v1,bg="#F0F8FF AliceBlue 爱丽丝蓝").grid(row=0,column=1,padx=5,pady=20)            # 用于储存 输入的内容  
e2 = tk.Entry(root,textvariable=v2,show='$',bg="#F0F8FF AliceBlue 爱丽丝蓝").grid(row=1,column=1,padx=5,pady=30) 
e3= tk.Entry(root,textvariable=v2,show='$',bg="#F0F8FF AliceBlue 爱丽丝蓝").grid(row=2,column=1,padx=5,pady=30)      # 进行表格式布局 . 


#######################
photoA = tk.PhotoImage(file="4.gif")
def Surch(R_Frame,User):
	global photoA
	tab01 = tk.Frame(R_Frame,bg="#B0C4DE LightSteelBlue 亮钢蓝")            # Create a tab 
	R_Frame.add(tab01, text='期刊查询')      # Add the tab
	
	root = tk.LabelFrame(tab01,width=240, text='查询与借阅：',bg="#B0C4DE LightSteelBlue 亮钢蓝")
	root.pack(side=tk.LEFT,fill=tk.Y)

	rootR1 = tk.LabelFrame(tab01,width=240, text='查询结果：',bg="#B0C4DE LightSteelBlue 亮钢蓝")
	rootR1.pack(side=tk.TOP,fill=tk.X)
	
	theLabel = tk.Label(rootR1,image=photoA,height=200,width=240,  
                   compound=tk.CENTER,bg="#191970 MidnightBlue 午夜蓝")   #声明图片的位置
	theLabel.pack(side=tk.TOP,fill=tk.X,pady=10)     # 自动调整布局
	rootR = tk.LabelFrame(tab01,width=240, text='查询结果：',bg="#B0C4DE LightSteelBlue 亮钢蓝")
	rootR.pack(side=tk.TOP,fill=tk.BOTH)

	tree=ttk.Treeview(rootR,height=10,show="headings",columns=("期刊名","期刊号","年","卷","期","数量"))#表格  
	tree.column("期刊名",width=70)   #表示列,不显示  
	tree.column("期刊号",width=70)  
	tree.column("年",width=70)  
	tree.column("卷",width=70)   #表示列,不显示  
	tree.column("期",width=70)  
	tree.column("数量",width=70)  
  
	tree.heading("期刊名",text="期刊名")  #显示表头  
	tree.heading("期刊号",text="期刊号")  
	tree.heading("年",text="年")
	tree.heading("卷",text="卷")  #显示表头  
	tree.heading("期",text="期")  
	tree.heading("数量",text="数量")
	tree.pack()
 
#----vertical scrollbar------------
	vbar = ttk.Scrollbar(rootR,orient=tk.VERTICAL,command=tree.yview)
	tree.configure(yscrollcommand=vbar.set)
	tree.grid(row=0,column=0,sticky=tk.NSEW)
	vbar.grid(row=0,column=1,sticky=tk.NS)
 
#----horizontal scrollbar----------
	hbar = ttk.Scrollbar(rootR,orient=tk.HORIZONTAL,command=tree.xview)
	tree.configure(xscrollcommand=hbar.set)
	hbar.grid(row=1,column=0,sticky=tk.EW)

	tk.Label(root,text='期刊名 :',font=("宋体", 15),bg="#B0C4DE LightSteelBlue 亮钢蓝").grid(row=0,column=0,pady=12) # 对Label内容进行 表格式 布局
	tk.Label(root,text='期刊号 :',font=("宋体", 15),bg="#B0C4DE LightSteelBlue 亮钢蓝").grid(row=2,column=0,pady=14)
	tk.Label(root,text='年 :',font=("宋体", 15),bg="#B0C4DE LightSteelBlue 亮钢蓝").grid(row=3,column=0,pady=14)
	tk.Label(root,text='卷 :',font=("宋体", 15),bg="#B0C4DE LightSteelBlue 亮钢蓝").grid(row=4,column=0,pady=14) # 对Label内容进行 表格式 布局
	tk.Label(root,text='期 :',font=("宋体", 15),bg="#B0C4DE LightSteelBlue 亮钢蓝").grid(row=5,column=0,pady=14)
	tk.Label(root,text='数量 :',font=("宋体", 15),bg="#B0C4DE LightSteelBlue 亮钢蓝").grid(row=6,column=0,pady=14)
	tk.Label(root,text='用户名 :',font=("宋体", 15),bg="#B0C4DE LightSteelBlue 亮钢蓝").grid(row=7,column=0,pady=14)
	tk.Label(root,text=User,font=("宋体", 15),bg="#B0C4DE LightSteelBlue 亮钢蓝").grid(row=7,column=1,padx=5,pady=14)
	v1=tk.StringVar()    # 设置变量 . 
	v2=tk.StringVar()
	v3=tk.StringVar()
	v4=tk.StringVar()    # 设置变量 . 
	v5=tk.StringVar()
	v6=tk.StringVar()
	v7=tk.StringVar()
	
	e1 = tk.Entry(root,textvariable=v1,bg="#F0F8FF AliceBlue 爱丽丝蓝").grid(row=0,column=1,padx=5,pady=5)            # 用于储存 输入的内容  
	e2 = tk.Entry(root,textvariable=v2,bg="#F0F8FF AliceBlue 爱丽丝蓝").grid(row=2,column=1,padx=5,pady=14)
	e3= tk.Entry(root,textvariable=v3,bg="#F0F8FF AliceBlue 爱丽丝蓝").grid(row=3,column=1,padx=5,pady=14)      # 进行表格式布局 . 
	e4= tk.Entry(root,textvariable=v4,bg="#F0F8FF AliceBlue 爱丽丝蓝").grid(row=4,column=1,padx=5,pady=14)      # 进行表格式布局 . 
	e5= tk.Entry(root,textvariable=v5,bg="#F0F8FF AliceBlue 爱丽丝蓝").grid(row=5,column=1,padx=5,pady=14)      # 进行表格式布局 . 
	e6= tk.Entry(root,textvariable=v6,bg="#F0F8FF AliceBlue 爱丽丝蓝").grid(row=6,column=1,padx=5,pady=14)      # 进行表格式布局 . 
	
	def QingKong():
		x=tree.get_children()
		for item in x:
			tree.delete(item)
		v1.set('')
		v2.set('')
		v3.set('')
		v4.set('')
		v5.set('')
		v6.set('')
		pass	
	
	def serch1():
		x=tree.get_children()
		for item in x:
			tree.delete(item)
		conn = pymysql.connect( host='101.132.122.108',port=3306,user='root',password='1234',db='journal',charset='utf8mb4',cursorclass=pymysql.cursors.DictCursor)
		cur = conn.cursor()
		sql1 = "SELECT * from journal where bookname like'%s%s%s'"%('%',v1.get(),'%')
		cur.execute(sql1)
		data = cur.fetchall()
		i=0
		if(data):
			for row in data:
				tree.insert("",0 ,values=(row['bookname'],row['kanhao'],row['year'],row['reel'],row['season'],row['amount']))
				if(int(row['amount'])>0):
					v1.set(row['bookname'])
					v2.set(row['kanhao'])

		else:
			mBox.showinfo('查询失败','暂无结果')
		cur.close()
		conn.close()		
	def borrow1():
		conn = pymysql.connect( host='101.132.122.108',port=3306,user='root',password='1234',db='journal',charset='utf8mb4',cursorclass=pymysql.cursors.DictCursor)
		cur = conn.cursor()
		if(v1.get()==''or v2.get()==''or v3.get()==''or v4.get()==''or v5.get()==''or v6.get()==''):
			mBox.showinfo('更新失败','内容填写不完整，更新失败!!')
			return
		sql="SELECT * from journal where bookname='%s' and kanhao='%s'and year='%s' and reel='%s' and season='%s'"%(v1.get(),v2.get(),v3.get(),v4.get(),v5.get())
		cur.execute(sql)
		data = cur.fetchone()
		if(data==None or int(data['amount'])==0):
			mBox.showinfo('借阅失败','没有库存')
			cur.close()
			conn.close()
			return
		if(int(v6.get())<=0):
			mBox.showinfo('借阅失败','借阅数量须大于0！')
			cur.close()
			conn.close()
			return
		if(int(v6.get())>5):
			mBox.showinfo('借阅失败','请借阅少于5本！')
			cur.close()
			conn.close()
			return
		else:
			print(int(data['amount']),int(v6.get()),int(data['amount'])<int(v6.get()),int(data['amount'])-int(v6.get()))
			if(int(data['amount'])>int(v6.get())):
				Amount=int(data['amount'])-int(v6.get())
				try:
					sql1 = "INSERT INTO borrow(bookname,kanhao,year,reel,season,bamount,id,bstate,borrownum) VALUES ('%s', '%s','%s', '%s', '%s','%s', '%s','%s', '%s')"%(v1.get(),v2.get(),v3.get(),v4.get(),v5.get(),v6.get(),User,'0', randint(1, 1000000))
					cur.execute(sql1)
					conn.commit()

					sql2 = "UPDATE journal SET amount='%s' where bookname='%s'and kanhao='%s' and year='%s'and reel='%s'and season='%s'"%(Amount,v1.get(),v2.get(),v3.get(),v4.get(),v5.get())
					cur.execute(sql2)
					conn.commit()
					mBox.showinfo('借阅成功','借阅成功!!')
				except:
					conn.rollback()
					mBox.showinfo('借阅失败','借阅失败')
				cur.close()
				conn.close()
				return
			mBox.showinfo('借阅失败','库存不足，请预约该期刊。')
			cur.close()
			conn.close()
			return
		cur.close()
		conn.close()
	def sub1():
		conn = pymysql.connect( host='101.132.122.108',port=3306,user='root',password='1234',db='journal',charset='utf8mb4',cursorclass=pymysql.cursors.DictCursor)
		cur = conn.cursor()
		if(v1.get()==''or v2.get()==''or v3.get()==''or v4.get()==''or v5.get()==''or v6.get()==''):
			mBox.showinfo('预约失败','内容填写不完整，更新失败!!')
			cur.close()
			conn.close()
			return
		if(int(v6.get())<=0):
			mBox.showinfo('预约失败','预约数量须大于0！')
			cur.close()
			conn.close()
			return
		if(int(v6.get())>5):
			mBox.showinfo('预约失败','请预约少于5本！')
			cur.close()
			conn.close()
			return
		sql="SELECT * from journal where bookname='%s' and kanhao='%s'and year='%s' and reel='%s' and season='%s'"%(v1.get(),v2.get(),v3.get(),v4.get(),v5.get())
		cur.execute(sql)
		data = cur.fetchone()
		if(data==None):
			#sql1 = "INSERT INTO JournalType(bookname,kanhao,sponsor,period,chubandi,language,kaiben,youfadaihao) VALUES ('%s', '%s','%s', '%s', '%s','%s', '%s', '%s')"%(v1.get(),v2.get(),v3.get(),v4.get(),v5.get(),v6.get(),v7.get(),v8.get())
			#cur.execute(sql1)
			#conn.commit()
			mBox.showinfo('预约失败','期刊不存在')
			cur.close()
			conn.close()
			return
		else:
			try:
				sql1 = "INSERT INTO reserve(bookname,kanhao,year,reel,season,bamount,id,reservenum) VALUES ('%s', '%s','%s', '%s', '%s','%s', '%s', '%s')"%(v1.get(),v2.get(),v3.get(),v4.get(),v5.get(),v6.get(),User, randint(1, 1000000))
				cur.execute(sql1)
				conn.commit()
				mBox.showinfo('预约成功','预约成功!!！')
			except:
				conn.rollback()
				mBox.showinfo('预约失败','预约失败')
			cur.close()
			conn.close()
			return
		mBox.showinfo('预约失败','预约失败')
		cur.close()
		conn.close()
		return
		
	tk.Button(root,relief="groove", text="搜索期刊",bg="#87CEFA LightSkyBlue 亮天蓝色",font=("宋体", 15),width=15,command=serch1).grid(row=1, column=0, sticky='E',pady=12)
	tk.Button(root,relief="groove", text="清空",bg="#87CEFA LightSkyBlue 亮天蓝色",font=("宋体", 15),width=15,command=QingKong).grid(row=1, column=1, sticky='W',pady=12)
	tk.Button(root,relief="groove", text="期刊借阅",bg="#87CEFA LightSkyBlue 亮天蓝色",font=("宋体", 15),width=15,command=borrow1).grid(row=8, column=0, sticky='E',pady=0)
	tk.Button(root,relief="groove", text="期刊预约",bg="#87CEFA LightSkyBlue 亮天蓝色",font=("宋体", 15),width=15,command=sub1).grid(row=8, column=1, sticky='W',pady=0)
	pass


def Listing(R_Frame):
	global photoA
	tab01 = tk.Frame(R_Frame,bg="#B0C4DE LightSteelBlue 亮钢蓝")            # Create a tab 
	R_Frame.add(tab01, text='征订期刊')      # Add the tab
	
	root = tk.LabelFrame(tab01,width=240, text='添加到征订表中：',bg="#B0C4DE LightSteelBlue 亮钢蓝")
	root.pack(side=tk.LEFT,fill=tk.Y)

	rootR1 = tk.LabelFrame(tab01,width=240, text='征订信息：',bg="#B0C4DE LightSteelBlue 亮钢蓝")
	rootR1.pack(side=tk.TOP,fill=tk.X)
	theLabel = tk.Label(rootR1,image=photoA ,height=200,width=240,  
                   compound=tk.CENTER,bg="#191970 MidnightBlue 午夜蓝")   #声明图片的位置
	theLabel.pack(side=tk.TOP,fill=tk.X,pady=10)     # 自动调整布局
	rootR = tk.LabelFrame(tab01,width=240, text='征订信息：',bg="#B0C4DE LightSteelBlue 亮钢蓝")
	rootR.pack(side=tk.TOP,fill=tk.BOTH)

	tree=ttk.Treeview(rootR,height=9,show="headings",columns=("期刊名","期刊号","数量","排行"))#表格  
	#tree["columns"]=  
	tree.column("期刊名",width=150)   #表示列,不显示  
	tree.column("期刊号",width=150)  
	tree.column("数量",width=50) 
	tree.column("排行",width=50) 
  
	tree.heading("期刊名",text="期刊名")  #显示表头  
	tree.heading("期刊号",text="期刊号")  
	tree.heading("数量",text="数量/借阅次数")
	tree.heading("排行",text="排行")
	tree.pack()
 
#----vertical scrollbar------------
	vbar = ttk.Scrollbar(rootR,orient=tk.VERTICAL,command=tree.yview)
	tree.configure(yscrollcommand=vbar.set)
	tree.grid(row=0,column=0,sticky=tk.NSEW)
	vbar.grid(row=0,column=1,sticky=tk.NS)
 
#----horizontal scrollbar----------
	hbar = ttk.Scrollbar(rootR,orient=tk.HORIZONTAL,command=tree.xview)
	tree.configure(xscrollcommand=hbar.set)
	hbar.grid(row=1,column=0,sticky=tk.EW)

	tk.Label(root,text='期刊名 :',font=("宋体", 15),bg="#B0C4DE LightSteelBlue 亮钢蓝").grid(row=0,column=0,pady=12) # 对Label内容进行 表格式 布局
	tk.Label(root,text='期刊号 :',font=("宋体", 15),bg="#B0C4DE LightSteelBlue 亮钢蓝").grid(row=2,column=0,pady=14)
	tk.Label(root,text='邮发代号 :',font=("宋体", 15),bg="#B0C4DE LightSteelBlue 亮钢蓝").grid(row=3,column=0,pady=14)
	tk.Label(root,text='语种 :',font=("宋体", 15),bg="#B0C4DE LightSteelBlue 亮钢蓝").grid(row=4,column=0,pady=14) # 对Label内容进行 表格式 布局
	tk.Label(root,text='开本 :',font=("宋体", 15),bg="#B0C4DE LightSteelBlue 亮钢蓝").grid(row=5,column=0,pady=14)
	tk.Label(root,text='创刊年 :',font=("宋体", 15),bg="#B0C4DE LightSteelBlue 亮钢蓝").grid(row=6,column=0,pady=14)
	tk.Label(root,text='数量 :',font=("宋体", 15),bg="#B0C4DE LightSteelBlue 亮钢蓝").grid(row=7,column=0,pady=14)
	
	v1=tk.StringVar()    # 设置变量 . 
	v2=tk.StringVar()
	v3=tk.StringVar()
	v4=tk.StringVar()    # 设置变量 . 
	v5=tk.StringVar()
	v6=tk.StringVar()
	v7=tk.StringVar()
	
	e1 = tk.Entry(root,textvariable=v1,bg="#F0F8FF AliceBlue 爱丽丝蓝").grid(row=0,column=1,padx=5,pady=5)            # 用于储存 输入的内容  
	e2 = tk.Entry(root,textvariable=v2,bg="#F0F8FF AliceBlue 爱丽丝蓝").grid(row=2,column=1,padx=5,pady=14)
	e3= tk.Entry(root,textvariable=v3,bg="#F0F8FF AliceBlue 爱丽丝蓝").grid(row=3,column=1,padx=5,pady=14)      # 进行表格式布局 . 
	e4= tk.Entry(root,textvariable=v4,bg="#F0F8FF AliceBlue 爱丽丝蓝").grid(row=4,column=1,padx=5,pady=14)      # 进行表格式布局 . 
	e5= tk.Entry(root,textvariable=v5,bg="#F0F8FF AliceBlue 爱丽丝蓝").grid(row=5,column=1,padx=5,pady=14)      # 进行表格式布局 . 
	e6= tk.Entry(root,textvariable=v6,bg="#F0F8FF AliceBlue 爱丽丝蓝").grid(row=6,column=1,padx=5,pady=14)      # 进行表格式布局 . 
	e7= tk.Entry(root,textvariable=v7,bg="#F0F8FF AliceBlue 爱丽丝蓝").grid(row=7,column=1,padx=5,pady=14)      # 进行表格式布局 . 

	def serch3():
		x=tree.get_children()
		for item in x:
			tree.delete(item)
		conn = pymysql.connect( host='101.132.122.108',port=3306,user='root',password='1234',db='journal',charset='utf8mb4',cursorclass=pymysql.cursors.DictCursor)
		cur = conn.cursor()
		sql1 = "SELECT * from subscrib "
		cur.execute(sql1)
		data = cur.fetchall()
		i=0
		if(data):
		#print(data) tree.insert("",3 ,values=("1","2","3")) 
			for row in data:
				tree.insert("",0 ,values=(row['bookname'],row['kanhao'],row['amount']))	
		else:
			mBox.showinfo('查询失败','暂无结果')
		cur.close()
		conn.close()
	def serch4():
		x=tree.get_children()
		for item in x:
			tree.delete(item)
		conn = pymysql.connect( host='101.132.122.108',port=3306,user='root',password='1234',db='journal',charset='utf8mb4',cursorclass=pymysql.cursors.DictCursor)
		cur = conn.cursor()
		sql1 = "SELECT * from recommend "
		cur.execute(sql1)
		data = cur.fetchall()
		i=0
		if(data):
		#print(data) tree.insert("",3 ,values=("1","2","3")) 
			for row in data:
				tree.insert("",0 ,values=(row['bookname'],row['booknum']))	
		else:
			mBox.showinfo('查询失败','暂无结果')
		cur.close()
		conn.close()		

	def serch2():
		x=tree.get_children()
		for item in x:
			tree.delete(item)
		conn = pymysql.connect( host='101.132.122.108',port=3306,user='root',password='1234',db='journal',charset='utf8mb4',cursorclass=pymysql.cursors.DictCursor)
		cur = conn.cursor()
		sql1 = "select * ,count(*) from borrow group by bookname order by count(*) asc"
		cur.execute(sql1)
		data = cur.fetchall()
		i=0
		if(data):
			for row in data:
				tree.insert("",0 ,values=(row['bookname'],row['kanhao'],row['count(*)'],len(data)-i))	
				i=i+1
		else:
			mBox.showinfo('查询失败','暂无结果')
		cur.close()
		conn.close()		
	def ShenDing():
		conn = pymysql.connect( host='101.132.122.108',port=3306,user='root',password='1234',db='journal',charset='utf8mb4',cursorclass=pymysql.cursors.DictCursor)
		cur = conn.cursor()
		if(v1.get()==''or v2.get()==''or v3.get()==''or v4.get()==''or v5.get()==''or v6.get()==''or v7.get()==''):
			mBox.showinfo('更新失败','内容填写不完整，更新失败!!')
			return
		sql="SELECT * from subscrib where bookname='%s' and kanhao='%s'"%(v1.get(),v2.get())
		cur.execute(sql)
		data = cur.fetchone()
		if(data):
			mBox.showinfo('更新失败','添加的项目已存在！')
			return
		sql1 = "INSERT INTO subscrib(bookname,kanhao,youfadaihao,lan,kaiben,dateback,amount) VALUES ('%s', '%s','%s', '%s', '%s','%s', '%s')"%(v1.get(),v2.get(),v3.get(),v4.get(),v5.get(),v6.get(),v7.get())
		try:
			cur.execute(sql1)
			conn.commit()
			mBox.showinfo('更新成功','更新成功')
			pass
		except:
			conn.rollback()
			mBox.showinfo('更新失败','内容填写不正确，更新失败')
			return
		
		cur.close()
		conn.close()
	tk.Button(root,relief="groove", text="征订信息",bg="#87CEFA LightSkyBlue 亮天蓝色",font=("宋体", 15),width=15,command=serch3).grid(row=9, column=0, sticky='E',pady=12)
	tk.Button(root,relief="groove", text="读者推荐信息",bg="#87CEFA LightSkyBlue 亮天蓝色",font=("宋体", 15),width=15,command=serch4).grid(row=9, column=1, sticky='W',pady=12)

	tk.Button(root,relief="groove", text="添加征订期刊",bg="#87CEFA LightSkyBlue 亮天蓝色",font=("宋体", 15),width=15,command=ShenDing).grid(row=8, column=0, sticky='E',pady=11)
	tk.Button(root,relief="groove", text="期刊借阅排行",bg="#87CEFA LightSkyBlue 亮天蓝色",font=("宋体", 15),width=15,command=serch2).grid(row=8, column=1, sticky='W',pady=11)
	pass
#########################
def show():
	global FUN_ADD,User
	conn = pymysql.connect( host='101.132.122.108',port=3306,user='root',password='1234',db='journal',charset='utf8mb4',cursorclass=pymysql.cursors.DictCursor)
	cur = conn.cursor()
	sql1 = "SELECT * from user where id='%s'"%(v1.get())
	cur.execute(sql1)
	data = cur.fetchone()
	if(data):
		key=data['password']
		User=data['id']
		print(key,User,data['identity'])
	else:
		mBox.showinfo('登录失败','用户名不存在！')
		return


	
	if( FUN_ADD==False):
		if(data['identity']=='学生' and key==v2.get()):
			Surch(R_Frame,User)
			Revert_for_stu(R_Frame,User)
			Article(R_Frame)
			Recommend(R_Frame,User)
			L_Frame.pack_forget()
			Head_Frame.pack(side=tk.TOP,fill= tk.X)
			image_change(Head_Frame)
			Tail_Frame.pack(side=tk.TOP,fill= tk.X)
			PersonalInfo(tab01,User,root2)
			Info_Frame.pack(side=tk.LEFT, fill="y",ipadx=50)			
			R_Frame.pack(expand=1, fill="both")  # Pack to make visible
			FUN_ADD=True

		elif(data['identity']=='管理员' and key==v2.get()):
			Surch(R_Frame,User)
			Revert(R_Frame,User)
			Article(R_Frame)
			Recommend(R_Frame,User)
			Govern(R_Frame)
			SendInfo(R_Frame)
			L_Frame.pack_forget()
			Head_Frame.pack(side=tk.TOP,fill= tk.X)
			image_change(Head_Frame)
			Tail_Frame.pack(side=tk.TOP,fill= tk.X)
			PersonalInfo(tab01,User,root2)
			Info_Frame.pack(side=tk.LEFT, fill="y",ipadx=50)		
			R_Frame.pack(expand=1, fill="both")  # Pack to make visible
			FUN_ADD=True

		elif(data['identity']=='采购员' and key==v2.get()):
			Surch(R_Frame,User)
			Revert_for_stu(R_Frame,User)
			Article(R_Frame)
			Recommend(R_Frame,User)
			Update(R_Frame)
			Amount(R_Frame)
			Listing(R_Frame)
			L_Frame.pack_forget()
			Head_Frame.pack(side=tk.TOP,fill= tk.X)
			image_change(Head_Frame)
			Tail_Frame.pack(side=tk.TOP,fill= tk.X)
			PersonalInfo(tab01,User,root2)
			Info_Frame.pack(side=tk.LEFT, fill="y",ipadx=50)			
			R_Frame.pack(expand=1, fill="both")  # Pack to make visible
			FUN_ADD=True
		else:mBox.showinfo('登录失败','密码错误！')
	cur.close()
	conn.close()

			
tk.Button(root,text='登录',relief="groove",bg="#87CEFA LightSkyBlue 亮天蓝色",font=("宋体", 15),width=10,command=show).grid(row=3,column=0,sticky=tk.W,padx=10,pady=10)  # 设置 button 指定 宽度 , 并且 关联 函数 , 使用表格式布局 . 
tk.Button(root,text='退出',relief="groove",bg="#87CEFA LightSkyBlue 亮天蓝色",font=("宋体", 15),width=10,command=total.quit).grid(row=3,column=1,sticky=tk.E,padx=10,pady=10)




###########################Right#################
tab10=tk.Frame(R_Frame,bg="#B0C4DE LightSteelBlue 亮钢蓝")            # Create a tab 
R_Frame.add(tab10, text='        欢迎登录',)
photo = tk.PhotoImage(file="欢迎新同学.gif")
theLabel = tk.Label(tab10,   # 将内容绑定在  root 初始框上面
padx=100,   image=photo,height=200,width=50,   #载入图片
                   compound=tk.CENTER,bg="#B0C4DE LightSteelBlue 亮钢蓝")   #声明图片的位置
                   #bg='reg'#指定背景颜色
theLabel.pack(expand=1,fill=tk.X)
tk.Label(tab10,text="期刊管理系统",font=("楷体", 30),bg="#B0C4DE LightSteelBlue 亮钢蓝",).pack()     # 自动调整布局   
tk.Label(tab10,text="专注期刊管理长达八个星期",font=("楷体", 15),bg="#B0C4DE LightSteelBlue 亮钢蓝",).pack()     # 自动调整布局 
tk.Label(tab10,pady=20,text="查询浏览库存期刊",font=("楷体", 23),bg="#B0C4DE LightSteelBlue 亮钢蓝",).pack()     # 自动调整布局
tk.Label(tab10,pady=20,text="查看统计信息",font=("楷体", 23),bg="#B0C4DE LightSteelBlue 亮钢蓝",).pack()     # 自动调整布局  
tk.Label(tab10,pady=20,text="个人信息查询修改",font=("楷体", 23),bg="#B0C4DE LightSteelBlue 亮钢蓝",).pack()     # 自动调整布局                        
#textLabel.pack(fill=BOTH, expand=1)   # 致命 textlabel 在初识框 中的位置
#textLabel.pack(side=LEFT)
# 创建一个图像Label对象
     # 自动调整布局



######################

###########################Right#################
total.mainloop()