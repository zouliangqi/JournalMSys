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
-- Table structure for table `aritcle`
--

DROP TABLE IF EXISTS `aritcle`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `aritcle` (
  `bookname` varchar(45) NOT NULL,
  `kanhao` varchar(45) NOT NULL,
  `year` int(4) DEFAULT NULL,
  `reel` int(11) DEFAULT NULL,
  `season` int(11) DEFAULT NULL,
  `title` varchar(45) NOT NULL,
  `author` varchar(45) NOT NULL,
  `keywords` varchar(45) NOT NULL,
  PRIMARY KEY (`title`,`author`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `aritcle`
--

LOCK TABLES `aritcle` WRITE;
/*!40000 ALTER TABLE `aritcle` DISABLE KEYS */;
INSERT INTO `aritcle` VALUES ('交通之声音','11-2348/D1',1998,2,2,'交通法','警察','安全'),('交通之声','11-2348/D',1998,2,2,'交通法规','警察','安全'),('交通之声','11-2348/D',2147483647,NULL,5,'交通防备','警察','安全'),('儿科药学杂志','50-1156/R',2147483647,NULL,4,'儿科药学','扬图','药学'),('中原文化研究','CN41-1426/C',2147483647,NULL,1,'古文化','蔡健雅','古文化'),('散文','12-1032/G4',2147483647,NULL,4,'哀歌','意中','歌曲'),('寄小读者','CXGT1',1996,3,2,'小读者','冰心','儿童文学'),('探索与求是','13-1021/C',2147483647,NULL,2,'探索世界','易于','世界'),('知音漫客','CN42-1776/J',2147483647,NULL,3,'斗破破破','天图','异火'),('计算机学报','CT12345',1998,2,3,'模式识别应用','张飒','模式识别'),('漫客·小说绘','CN42-1810/J',2147483647,NULL,2,'缥缈录','江岸','九州'),('国外财经','CN43-1088/F',2147483647,NULL,2,'美国经济','杨永信','电力'),('财经界','11-4098/F',2147483647,NULL,6,'论财经','蔡哲','财经'),('意林','22-1361/1',2147483647,NULL,1,'连城','王斌','城中各');
/*!40000 ALTER TABLE `aritcle` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2018-06-01 11:17:41
