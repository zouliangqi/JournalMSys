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
-- Table structure for table `subscrib`
--

DROP TABLE IF EXISTS `subscrib`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `subscrib` (
  `bookname` char(45) NOT NULL,
  `lan` char(45) NOT NULL,
  `kanhao` char(45) NOT NULL,
  `youfadaihao` char(45) NOT NULL,
  `amount` char(10) DEFAULT NULL,
  `kaiben` char(45) DEFAULT NULL,
  `dateback` char(45) DEFAULT NULL,
  PRIMARY KEY (`bookname`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `subscrib`
--

LOCK TABLES `subscrib` WRITE;
/*!40000 ALTER TABLE `subscrib` DISABLE KEYS */;
INSERT INTO `subscrib` VALUES ('1','1','1','1','1','1','1'),('python','en','222','227h','4','2','1998'),('中原文化研究','中原文化研究杂志社','CN41-1426/C','36-15',NULL,NULL,NULL),('儿科药学杂志','中国药学会儿科药学专业组','50-1156/R','78-133',NULL,NULL,NULL),('国外财经','国家教育部','CN43-1088/F','410079',NULL,NULL,NULL),('国家安全通讯','国家安全部','11-2348/D','82-176',NULL,NULL,NULL),('意林','长春市文学艺术界联合会','22-1361/1','16-287',NULL,NULL,NULL),('探索与求是','中国共产党河北省委员会','13-1021/C','18-64',NULL,NULL,NULL),('散文','百花文艺出版社','12-1032/G4','无',NULL,NULL,NULL),('漫客·小说绘','湖北知音传媒股份有限公司','CN42-1810/J','38-298',NULL,NULL,NULL),('知音漫客','湖北知音传媒股份有限公司','CN42-1776/J','38-127',NULL,NULL,NULL),('财经界','国家信息中心','11-4098/F','82-569',NULL,NULL,NULL);
/*!40000 ALTER TABLE `subscrib` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2018-06-01 11:17:44
