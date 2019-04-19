-- MySQL dump 10.13  Distrib 5.7.17, for Win64 (x86_64)
--
-- Host: 101.132.122.108    Database: journal
-- ------------------------------------------------------
-- Server version	5.6.36-log

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `JournalType`
--

DROP TABLE IF EXISTS `JournalType`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `JournalType` (
  `bookname` char(45) NOT NULL,
  `sponsor` char(45) DEFAULT NULL,
  `period` char(45) DEFAULT NULL,
  `chubandi` char(45) DEFAULT NULL,
  `language` char(45) DEFAULT NULL,
  `kaiben` char(45) DEFAULT NULL,
  `kanhao` char(45) NOT NULL,
  `zhengdinghao` char(45) DEFAULT NULL,
  `youfadaihao` char(45) DEFAULT NULL,
  `chuangkannian` char(4) DEFAULT NULL,
  `introduction` char(45) DEFAULT NULL,
  `journalcol` char(45) DEFAULT NULL,
  PRIMARY KEY (`bookname`,`kanhao`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `JournalType`
--

LOCK TABLES `JournalType` WRITE;
/*!40000 ALTER TABLE `JournalType` DISABLE KEYS */;
INSERT INTO `JournalType` VALUES ('1','3','222','222222222','22222222222','2222','2',NULL,'2222',NULL,NULL,NULL),('12','3','3','3','3','3','23',NULL,'3',NULL,NULL,NULL),('2','4','5','6','7','8','3',NULL,'6',NULL,NULL,NULL),('Python','工信出版社','3','安徽','zh','4','234',NULL,'242354',NULL,NULL,NULL),('中原文化研究','中原文化研究杂志社','双月','河南省','中文','16开','CN41-1426/C','300009','36-15','1905','面向经济建设主战场',NULL),('儿科药学杂志','中国药学会儿科药学专业组','双月','重庆市','中文','大16开','50-1156/R','300008','78-133','1905','报道儿科药学的进展与动态',NULL),('国外财经','国家教育部','季','湖南省长沙市','中文','16开','CN43-1088/F','300010','410079','1905','编译外国财经理论的研究成果',NULL),('国家安全通讯','国家安全部','月刊','','中文','','11-2348/D','300006','82-176','0000','国家安全工作专刊',NULL),('意林','长春市文学艺术界联合会','半月刊','长春市','中文','16开','22-1361/1','300001','16-287','1905','散文小说类刊物',NULL),('探索与求是','中国共产党河北省委员会','月刊','河北','中文','16开','13-1021/C','300005','18-64','1905','经济学术理论刊物',NULL),('散文','百花文艺出版社','月刊','','中文','16开','12-1032/G4','300004','无','1905','散文类刊物',NULL),('漫客·小说绘','湖北知音传媒股份有限公司','半月刊','湖北','中文','16开','CN42-1810/J','300002','38-298','2009','小说类刊物',NULL),('知音漫客','湖北知音传媒股份有限公司','周刊','湖北','中文','16开','CN42-1776/J','300003','38-127','1905','漫画类刊物',NULL),('财经界','国家信息中心','半月刊','','中文','','11-4098/F','300007','82-569','1905','介绍国家经济政策',NULL);
/*!40000 ALTER TABLE `JournalType` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2018-06-01 11:17:45
